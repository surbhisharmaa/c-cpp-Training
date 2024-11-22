#include <iostream>
using namespace std;
 
template <typename T>
class StackTemplate {
    T* ptr;
    int* endPtr;
    int mx;
 
public:
 
    StackTemplate(int maxSize) {
        ptr = new T[maxSize]; 
        endPtr = ptr; // First element address of array
        mx = maxSize;
    }
 
    ~StackTemplate() {
        delete[] ptr;
    }
 
    void push(T element) {
        if ((endPtr - ptr) < mx ) {
            // cout<<endPtr<<" "<<ptr<<endl;
            // cout<<endPtr-ptr<<endl; 
            // cout<<sizeof(ptr)<<endl;
            *endPtr = element; 
            ++endPtr;
            cout << "Pushed element: " << element << endl;
        } else {
            cout << "Overflow: Stack is full!" << endl;
        }
    }
 
    // Pop function to remove the top element from the stack
    void pop() {
        if (endPtr == ptr) {
            cout << "Underflow: Stack is empty!" << endl;
        } else {
            --endPtr;  
            cout << "Popped element: " << *endPtr << endl;
        }
    }
 
    void topElement() {
        if (endPtr == ptr) {
            cout << "Stack is empty!" << endl;
        } else {
            cout << "Top element is: " << *(endPtr - 1) << endl;
        }
    }
 
    // Function to check if the stack is empty
    bool isEmpty() {
        return endPtr == ptr;
    }
 
    int size() {
        return endPtr - ptr;
    }
};
 
int main() {
    StackTemplate<int> stack(5);
 
    stack.push(10);
    stack.push(20);
    stack.push(30);
    stack.push(40);
    stack.push(50);
    stack.push(60); // overflow
 
    stack.topElement();
 
    stack.pop();
    stack.pop();
    // stack.push(89); // working
 
    stack.topElement();
 
    cout << "Current stack size: " << stack.size() << endl;
 
    // Pop all elements
    stack.pop();
    stack.pop();
    stack.pop();
    stack.pop(); // underflow
 
    return 0;
}