#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;


class MyClass {
    std::string data;

public:
    // Constructor
    MyClass(const string& s) : data(s){}
    // Copy Constructor
    MyClass(const MyClass& other) : data(other.data) {}
    
    // Move Constructor
    MyClass(MyClass&& other) : data(std::move(other.data)) {}

    // Copy Assignment
    MyClass& operator=(const MyClass& other) {
        if (this != &other) data = other.data;
        return *this;
    }

    // Move Assignment
    MyClass& operator=(MyClass&& other)  {
        if (this != &other) data = std::move(other.data);
        return *this;
    }

    void display(){
        cout<<this->data<<endl;
    }
};


int main(){
    MyClass obj1("Helloooo");
    MyClass obj2 = std::move(obj1);
    obj1.display(); //become null after moving
    obj2.display();
    MyClass obj3(obj2);
    obj3.display();
}