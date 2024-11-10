//1. Database Record Retrieval Example


#include <iostream>
#include <string>
using namespace std;


class Database {
public:
    // Retrieve record by integer ID
    void getRecord(int id) {
        std::cout << "Retrieving record with ID: " << id << std::endl;
    }

    // Retrieve record by string key
    void getRecord(const string& key) {
        std::cout << "Retrieving record with key: " << key << std::endl;
    }

    // Retrieve record by both ID and version number
    void getRecord(int id, int version) {
        std::cout << "Retrieving record with ID: " << id << " and version: " << version << std::endl;
    }
};

int main() {
    Database db;
    db.getRecord(123);                 
    db.getRecord("ABC123");            
    db.getRecord(123, 2);              
    return 0;
}
