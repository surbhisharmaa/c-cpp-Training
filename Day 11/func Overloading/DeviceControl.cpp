//2. Smart Home Device Control Example

#include <iostream>
#include <string>
using namespace std;

class SmartHome {
public:
    // Set temperature for a specific room
    void setTemperature(const string& room, double temp) {
        cout << "Setting temperature in " << room << " to " << temp << " degrees." << endl;
    }

    // Set temperature for multiple rooms by passing an array of rooms
    void setTemperature(const string rooms[], int numRooms, double temp) {
        cout << "Setting temperature in multiple rooms to " << temp << " degrees:" << endl;
        for (int i = 0; i < numRooms; i++) {
            cout << " - " << rooms[i] << endl;
        }
    }

    // Set a default temperature for the entire home
    void setTemperature(double temp) {
        cout << "Setting default home temperature to " << temp << " degrees." << endl;
    }
};

int main() {
    SmartHome home;
    home.setTemperature("Living Room", 22.5);             
    const string rooms[] = {"Kitchen", "Bedroom"};
    home.setTemperature(rooms, 2, 20.0);                  
    home.setTemperature(18.0);                            
    return 0;
}
