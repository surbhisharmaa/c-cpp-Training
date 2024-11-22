#include <iostream>
using namespace std;


class MyClass{
	public:
	int x;
	int y;

	//Constr
	MyClass(int x,int y) {
		this->x = x;
		this->y = y;
		cout<<"Inside Constructor"<<endl;
	}

	//copy constr
	MyClass(const MyClass& obj){
		cout<<"Copy Constructor"<<endl;
		this->x = obj.x;
		this->y = obj.y;
		x++;
	}


	//Assignment operator
	MyClass& operator=(const MyClass& obj){

		
		if (this == &obj) { // Handle self-assignment
            return *this;
        }
        cout<<"Assignment operator"<<endl;
		this->x = obj.x;
		this->y = obj.y;
		return *this;

	}

	void myFunc(){
		cout<<x<<" "<<y<<endl;
	}

	~MyClass(){
		cout<<"Inside destructor"<<endl;

	}

};

int main(){
	//deep copy through copy constructor
	MyClass* obj1 = new MyClass(40,50);
	obj1->myFunc();
	cout<<endl;
	MyClass* obj2 = new MyClass(*obj1); 
	obj1->myFunc();
	obj2->myFunc();
	cout<<endl;
	MyClass* obj3 = new MyClass(*obj2); 
	obj1->myFunc();
	obj2->myFunc();
	obj3->myFunc();
	cout<<endl;
	MyClass* obj4 = new MyClass(80,90);
	obj4 = obj3;
	cout<<&obj3 <<" "<<&obj4<<endl;
	obj1->myFunc();
	obj2->myFunc();
	obj3->myFunc();
	obj4->myFunc();
	cout<<endl;
	delete obj1;
	delete obj2;
	delete obj3;
	delete obj4;
}