#include <iostream>
using namespace std;

template <typename T>
class Node {
public:
    T data;
    Node* next;
    Node* prev;

    Node(T val) {
        data = val;
        next = nullptr;
        prev = nullptr;
    }
};

template <typename T>
class DoublyLinkedList {
    Node<T>* head;
    Node<T>* tail;

public:
    // Constructor
    DoublyLinkedList() {
        head = nullptr;
        tail = nullptr;
    }

    // Destructor
    ~DoublyLinkedList() {
        Node<T>* temp;
        while (head != nullptr) {
            temp = head;
            head = head->next;
            delete temp;
        }
    }

    // Insert at the front of the list
    void insertAtFront(T val) {
        Node<T>* newnode = new Node<T>(val);
        if (head == nullptr) {
            head = tail = newnode;
        } else {
            newnode->next = head;
            head->prev = newnode;
            head = newnode;
        }
    }

    // Insert at the end of the list
    void insertAtEnd(T val) {
        Node<T>* newnode = new Node<T>(val);
        if (tail == nullptr) {
            head = tail = newnode;
        } else {
            tail->next = newnode;
            newnode->prev = tail;
            tail = newnode;
        }
    }

    // Delete from the front of the list
    void deleteFromFront() {
        if (head == nullptr) return;

        Node<T>* temp = head;
        if (head == tail) {
            head = tail = nullptr;
        } else {
            head = head->next;
            head->prev = nullptr;
        }
        delete temp;
    }

    // Delete from the end of the list
    void deleteFromEnd() {
        if (tail == nullptr) return;

        Node<T>* temp = tail;
        if (head == tail) {
            head = tail = nullptr;
        } else {
            tail = tail->prev;
            tail->next = nullptr;
        }
        delete temp;
    }

    // Display the linked list forward
    void displayForward() const {
        Node<T>* temp = head;
        while (temp != nullptr) {
            cout << temp->data << " <-> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }

    // Display the linked list backward
    void displayBackward() const {
        Node<T>* temp = tail;
        while (temp != nullptr) {
            cout << temp->data << " <-> ";
            temp = temp->prev;
        }
        cout << "NULL" << endl;
    }

    // Reverse the doubly linked list
    void reverse() {
        Node<T>* temp = nullptr;
        Node<T>* current = head;

        // Swap next and prev pointers for each node
        while (current != nullptr) {
            temp = current->prev;
            current->prev = current->next;
            current->next = temp;
            current = current->prev;
        }

        // Adjust head and tail
        if (temp != nullptr) {
            head = temp->prev;
        }
    }
};

int main() {
    DoublyLinkedList<int> list;
    list.insertAtFront(20);
    list.insertAtFront(30);
    list.insertAtFront(40);
    list.insertAtEnd(50);
    list.insertAtEnd(60);

    cout << "Display Forward: ";
    list.displayForward();

    cout << "Display Backward: ";
    list.displayBackward();

    list.deleteFromFront();
    cout << "After Deleting From Front: ";
    list.displayForward();

    list.deleteFromEnd();
    cout << "After Deleting From End: ";
    list.displayForward();

    list.reverse();
    cout << "After Reversing the List: ";
    list.displayForward();

    return 0;
}
