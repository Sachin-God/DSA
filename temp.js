const express = require("express");
const mongoose = require("mongoose");

const app = express();
const port = 3000;

const uri = "mongodb://localhost:27017/transferMoney";

mongoose.connect(uri, { useNewUrlParser: true, useUnifiedTopology: true });

const db = mongoose.connection;

db.on("error", console.error.bind(console, "connection error:"));
db.once("open", function () {
  console.log("Connected to MongoDB");
});

app.use(express.urlencoded({ extended: true }));
app.use(express.json());

app.use((req, res, next) => {
  res.header("Access-Control-Allow-Origin", "*");
  res.header(
    "Access-Control-Allow-Headers",
    "Origin, X-Requested-With, Content-Type, Accept"
  );
  next();
});

const personalInfoSchema = new mongoose.Schema({
  Name: String,
  Email: String,
  CurrentBalance: Number,
  NoOfPayments: Number,
});

const transactionSchema = new mongoose.Schema({
  idFrom: String,
  idTo: String,
  amount: Number,
});

const PersonalInfo = mongoose.model("PersonalInfo", personalInfoSchema);
const Transaction = mongoose.model("Transaction", transactionSchema);

app.get("/api/data", async (req, res) => {
  const data = await PersonalInfo.find();

  const formattedData = data.map((item) => ({
    _id: item._id.toString(),
    Name: item.Name,
    Email: item.Email,
    CurrentBalance: item.CurrentBalance,
    NoOfPayments: item.NoOfPayments,
  }));
  res.json(formattedData);
});

app.post("/submit", async (req, res) => {
  const { idFrom, idTo, amount } = req.body;
  console.log('Received form data: ${idFrom}, ${idTo}, ${amount}'); // include it in bacticks

  // Convert amount to number
  const amountNumber = parseInt(amount);

  if (isNaN(amountNumber) || amountNumber <= 0) {
    return res.status(400).send("Invalid amount");
  }

  try {
    // Update the sender's document
    console.log("idFrom:", idFrom);
    console.log("idTo:", idTo);
    console.log("amountNumber:", amountNumber);

    const senderUpdate = await PersonalInfo.updateOne(
      { _id: idFrom },
      {
        $inc: {
          CurrentBalance: -amountNumber, // Decrease the balance
          NoOfPayments: 1, // Increment the number of payments
        },
      }
    );

    console.log("Sender update result:", senderUpdate);

    const receiverUpdate = await PersonalInfo.updateOne(
      { _id: idTo },
      {
        $inc: {
          CurrentBalance: amountNumber, // Increase the balance
        },
      }
    );

    console.log("Receiver update result:", receiverUpdate);

    // Insert the transaction document
    const transaction = new Transaction({
      idFrom: idFrom,
      idTo: idTo,
      amount: amountNumber,
    });

    await transaction.save();
    console.log("Transaction inserted:", transaction._id);
    res.send("Transaction successfully recorded");
  } catch (err) {
    console.error("Error updating documents or inserting transaction:", err);
    res.status(500).send("Error recording transaction");
  }
});

app.listen(port, () => {
  console.log(`Server listening on port ${port}`);
});