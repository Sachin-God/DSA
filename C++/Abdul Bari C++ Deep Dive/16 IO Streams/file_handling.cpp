#include<iostream>
#include<fstream> // contains the classes ifstream, ofstream, and fstream

using namespace std;

int main() {
    // Opening a file for reading
    ifstream inputFile;
    inputFile.open("input.txt");  // Use double quotes for file names
    if (!inputFile) {
        cerr << "File couldn't be opened!" << endl;
        return 1;
    }

    // Opening a file for writing
    ofstream outputFile("output.txt");
    if (!outputFile) {
        cerr << "Output file couldn't be opened!" << endl;
        return 1;
    }

    // Reading from input.txt and writing to output.txt
    string line;
    while (getline(inputFile, line)) {
        cout << line << endl;      // Displaying the content of input.txt
        outputFile << line << endl; // Writing content to output.txt
    }

    // Close both files after operation
    inputFile.close();
    outputFile.close();

    cout << "File operation completed!" << endl;
    return 0;
}
