#include <iostream>
using namespace std;


template <typename T>
class Node{
public:
	T data;
	Node* next;

	Node(T val){
		data = val;
		next = nullptr;
	}
};


template <typename T>
class LinkedList{
	Node<T>* head;
public:
	//Constructor
	LinkedList(){
		head = nullptr;
	}

	//Destructor
	~LinkedList() {
        Node<T>* temp;
        while (head != nullptr) {
            temp = head;
            head = head->next;
            delete temp;
        }
    }


    // Insert at the front of the list		
	void insertAtFront(int val){
		Node<T>*newnode = new Node<T>(val);
		newnode->next = head;
		head = newnode;
	}


    // Insert at the end of the list
    void insertAtEnd(int val){
    	Node<T>* newnode = new Node<T>(val);
    	if(head == nullptr){
    		head = newnode;
    		return;
    	}
    	Node<T>* temp = head;
    	while(temp->next!=nullptr){
    		temp = temp->next;
    	}
    	temp->next = newnode;
    }



	// Delete from the front of the list
	void deleteFromFront(){
		if(head == nullptr){
			return;
		}
		Node<T>* temp = head;
		head = head->next;
		delete temp;
	}


    // Delete from the end of the list
    void deleteFromEnd(){
    	if(head == nullptr){
			return;
		}

		if(head->next ==nullptr){
			delete head;
			head = nullptr;
			return;
		}
		Node<T>* temp = head;
		while(temp->next!=nullptr && temp->next->next != nullptr){
			temp= temp->next;
		}
		delete temp->next;
		temp->next = nullptr;
    }


    // Display the linked list
    void display() const{
    	if(head == nullptr){
    		return;
    	}

    	Node <T>*temp = head;
    	while(temp!=nullptr){
    		cout << temp->data << " -> ";
        	temp = temp->next;
    	}
    	cout << "NULL" << endl;
    }


    // Reverse the linked list
    void reverse(){
    	Node<T>* prev = nullptr;
    	Node<T>* curr = head;
    	Node<T>* nxt = nullptr;
    	while(curr!=nullptr){
    		nxt = curr;
    		curr->next = prev;
    		prev = curr;
    		curr = nxt;
    	}
    	head = prev;
    }
};

int main(){
	LinkedList<int> list;
	list.insertAtFront(20);
	list.insertAtFront(30);
	list.insertAtFront(40);
	list.insertAtEnd(40);
    list.insertAtEnd(50);

    list.display();
    list.deleteFromFront();
    list.display();
    list.deleteFromEnd();
    list.display();
    list.reverse();
    list.display();
}