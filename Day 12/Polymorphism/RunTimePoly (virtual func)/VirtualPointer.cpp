#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

class A{
public:
	A(){
		cout<<"Constructor A"<<endl;
		func();
	}
	virtual void func(){
		cout<<"Base Class"<<endl;
	}
	~A(){
		cout<<"Destructor A"<<endl;
		func();
	}
};


class B : public A{
	int x;
public:
	B(){
		cout<<"Constructor B"<<endl;
		func();
	}
	void func(){
		cout<<"Derived Class"<<endl;
	}
	~B(){
		cout<<"Destructor		 B"<<endl;
		func();
	}
};




int main(){

	// A a;
	// B b;
	// a.func();
	// b.func();


	// A* ptr = new A;
	// B* ptr1 = new B;
	// ptr->func();
	// ptr1->func();
	// delete ptr;
	// delete ptr1;

	// giving any class address in A class pointer will point to A only without virtual
	A* ptr = new B; 
	B* ptr1 = new B;
	ptr->func();
	ptr1->func();
	delete ptr;
	delete ptr1;


	// Initialisation order - ?????

	// according to theory - vptr ->const

	// destructor exeution order???
}