//3. Image Processing Application Example


#include <iostream>
#include <string>
using namespace std;

class Filter {
public:
    // Apply filter by name
    void apply(const string& filterName) {
        cout << "Applying filter: " << filterName << endl;
    }

    // Apply filter by name with an intensity level
    void apply(const string& filterName, int intensity) {
        cout << "Applying filter: " << filterName << " with intensity " << intensity << endl;
    }

    // Apply filter by name to a specific region
    void apply(const string& filterName, int x, int y, int width, int height) {
        cout << "Applying filter: " << filterName << " to region (" << x << ", " << y 
                  << ") with width " << width << " and height " << height << endl;
    }
};

int main() {
    Filter imageFilter;
    imageFilter.apply("Blur");                             
    imageFilter.apply("Sharpen", 5);                       
    imageFilter.apply("Contrast", 10, 10, 100, 100);       
    return 0;
}
