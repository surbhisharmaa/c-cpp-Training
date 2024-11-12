#include <iostream>
#include <fstream>
using namespace std;
 
int main() {
    // Open the file for both reading and writing
    fstream file("sample.txt", ios::in | ios::out);
 
    // Check if the file is opened successfully
    if (!file) {
        cout << "Error opening the file!" << endl;
        return 1;
    }
 
    // Read the current content of the file
    string line;
    while (getline(file, line)) {
        cout << line << endl;
    }
 
    // Write new data to the file
    file.seekp(0);  // Move the output pointer to the beginning
    file << "This is the updated content.\n";
 
    // Close the file
    file.close();
 
    cout << "File read and updated successfully!" << endl;
 
    return 0;
}