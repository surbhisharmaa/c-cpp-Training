#include <iostream>
#include <cstring>
#include <string>
using namespace std;

// Name mangling never consider return type
//it only consider - func name, list of para, and individual datatypes

void func(int a){
	cout<<"Inside func1"<<endl;
}


void func(float f){
	cout<<"Inside func2"<<endl;
}

void func(int x, int y,int z){
	cout<<"Inside func3"<<endl;
}


class A{
public:
	int x;
	void fun(){
		cout<<"In the base class"<<endl;
	}

	//Operator Overloading
	A& operator=(const A& a){
		this->x= a.x;
		// this = &a;

		return *this;
	}

};


class B:public A{
public:
	void fun() 
	{
		cout<<"In the derived class"<<endl;
	}

	//Operator Overloading
	B& operator=(const B&rhs) 
	{
		return *this;
	}
};


int main(){
	//Name Mangling
	// func();
	// func(2);
	// func(1.2f);
	// func(5,7,10);


	A a;
	A a1;
	B b;
	B b1;
	a.x = 10;
	cout<<a.x<<endl;
	// a.fun();
	// b.fun();
	a1 = a;
	b1 = b;
	cout<<a1.x<<endl;
	// A &a = a1;  //this can be done (doable)
	// int &b = a;
	return 0;
}