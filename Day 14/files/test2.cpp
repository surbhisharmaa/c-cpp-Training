#include <iostream>
#include <fstream>
#include <string>
using namespace std;
 
int main() {
    ifstream inFile("sample.txt");  // Open file for reading
 
    if (!inFile) {  // Check if the file opened successfully
        cout << "File could not be opened!" << endl;
        return 1;
    }
 
    string line;
    while (getline(inFile, line)) {  // Read line by line
        cout << line << endl;  // Print each line to console
    }
 
    inFile.close();  // Close the file
    return 0;
}