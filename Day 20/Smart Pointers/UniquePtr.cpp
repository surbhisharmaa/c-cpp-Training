#include <iostream>
#include <memory> // For unique_ptr
using namespace std;

class MyClass {
public:
    MyClass(int value) : value(value) {
        cout << "MyClass constructor called with value: " << value << endl;
    }

    ~MyClass() {
        cout << "MyClass destructor called for value: " << value << endl;
    }

    void display() const {
        cout << "Value is: " << value << endl;
    }

private:
    int value;
};

int main() {
    unique_ptr<MyClass> ptr1 = make_unique<MyClass>(42);
    ptr1->display();

    unique_ptr<MyClass> ptr2;
    // ptr2 = ptr1;//cant be referenced
    ptr2 = move(ptr1);// Transfer ownership to another unique_ptr

    if (!ptr1) {
        cout << "ptr1 is now nullptr after ownership transfer" << endl;
    }

    ptr2->display();// ptr2 now manages the object

    // ptr2 goes out of scope and the resource is automatically deleted
    return 0;
}
