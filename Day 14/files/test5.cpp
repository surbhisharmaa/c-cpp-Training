#include <iostream>
#include <fstream>
using namespace std;
 
int main() {
    // Open the file in append mode
    ofstream outFile("sample.txt", ios::app);
 
    // Check if the file is opened successfully
    if (!outFile) {
        cout << "Error opening the file!" << endl;
        return 1;
    }
 
    // Write some data to the file
    outFile << "This is new data being appended to the file.\n";
    outFile << "Adding another line of text.\n";
 
    // Close the file
    outFile.close();
 
    cout << "Data appended to the file successfully!" << endl;
 
    return 0;
}