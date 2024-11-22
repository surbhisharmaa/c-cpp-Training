#include <iostream>
#include <memory>
#include <string>
 


 
// Interface class
class MyClass {
public:
    MyClass(); // Constructor
    ~MyClass(); // Destructor
 
    void setName(const std::string& name);
    std::string getName() const;
 
private:
	class MyClassImpl; // declaration
    std::unique_ptr<MyClassImpl> pImpl; // Pointer to implementation
};
 
// Implementation class definition
class MyClassImpl {
public:
    std::string name; // Actual data member
};
 
// Constructor
MyClass::MyClass() : pImpl(std::make_unique<MyClassImpl>()) {}
 
// Destructor
MyClass::~MyClass() = default;

void MyClass::setName(const std::string& name) {
    pImpl->name = name;
}
 
std::string MyClass::getName() const {
    return pImpl->name;
}
 
// Main function to demonstrate usage
int main() {
    MyClass myObject;
    myObject.setName("Pimpl Example");
    std::cout << "Name: " << myObject.getName() << std::endl;
    return 0;
}
has context menu