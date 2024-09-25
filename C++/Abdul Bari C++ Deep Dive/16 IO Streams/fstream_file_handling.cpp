#include <iostream>
#include <fstream>

using namespace std;

int main(){
    fstream file;
    file.open("input.txt", ios::in | ios::out | ios::app); // both input output
    if (!file){
        cerr << "File couldn't be opened!" << endl;
        return 1;
    }

    // Write to the file
    file << "Appending this line to the file." << endl;

    // Move file pointer back to the beginning
    file.seekg(0);

    // Read the file
    string line;
    while (getline(file, line)){
        cout << line << endl;
    }

    file.close();
    return 0;
}
