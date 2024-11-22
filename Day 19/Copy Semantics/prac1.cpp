#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

// //default behaviour of copy constru and assign ope is shallow copy but 
// when we have non pointer variable and user define cc and ao then it will 
// be deeply copied to show shallow behaviour we need to have pointer mem variables


class MyClass{
	public:
	int* x = new int;
	int* y = new int;

	//Constr
	MyClass(int x,int y) {
		*this->x = x;
		*this->y = y;
		cout<<"Inside Constructor"<<endl;
	}

	//copy constr
	MyClass(const MyClass& obj){
		this->x = obj.x;
		this->y = obj.y;
		(*x)++;
	}


	//Assignment operator
	MyClass& operator=(const MyClass& obj){

		cout<<"Assignment operator"<<endl;
		if (this == &obj) { // Handle self-assignment
            return *this;
        }

		this->x = obj.x;
		this->y = obj.y;
		return *this;

	}

	void myFunc(){
		cout<<*x<<" "<<*y<<endl;
	}

	~MyClass(){
		cout<<"Inside destructor"<<endl;
	}

};


int main(){
	MyClass obj1(40,50);
	// MyClass *obj1 = new MyClass;
	cout<<"obj1's stuff"<<endl;
	obj1.myFunc();
	cout<<endl;

	MyClass	obj2(obj1);
	cout<<"obj2's stuff"<<endl;
	obj2.myFunc();
	cout<<"obj1's stuff"<<endl;
	obj1.myFunc();
	cout<<endl;

	MyClass	obj3 = obj2;
	cout<<"obj3's stuff"<<endl;
	obj3.myFunc();
	cout<<"obj2's stuff"<<endl;
	obj2.myFunc();
	cout<<"obj1's stuff"<<endl;
	obj1.myFunc();
	cout<<endl;

	MyClass	obj4(80,90);
	cout<<"obj4's stuff"<<endl;
	obj4.myFunc();

	obj4 = obj3;
	*obj1.x=100;
	// cout<<&obj3 <<" "<<&obj4<<endl;
	cout<<"obj4's stuff"<<endl;
	obj4.myFunc();
	cout<<"obj3's stuff"<<endl;
	obj3.myFunc();
	cout<<"obj2's stuff"<<endl;
	obj2.myFunc();
	cout<<"obj1's stuff"<<endl;
	obj1.myFunc();
	cout<<endl;

}