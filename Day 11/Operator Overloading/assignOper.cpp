#include <iostream>
#include <cstring>
#include <string>
using namespace std;


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


	//without inheriting any class u cannot use its object i.e 
	// u can not use b's obj in class A
	// A& operator=(const B&rhs) 
	// {
	// 	this->x= rhs.z;
	// 	return *this;
	// }
};

class B:public A{
public:

	int z;
	void fun() 
	{
		cout<<"In the derived class"<<endl;
	}

	//Operator Overloading
	B& operator=(const B&rhs) 
	{
		this->z= rhs.z;
		return *this;
	}

	B& operator=(const A&rhs) 
	{
		this->z= rhs.x;
		return *this;
	}
};

int main(){
	A a1;
	A a2;
	a1.x = 50;
	a2 = a1;
	cout<<a1.x<<" "<<a2.x<<endl;
	B b1;
	b1.z = 100;
	B b2;
	b2 = b1;
	cout<<b1.z<<" "<<b2.z<<endl;
	b2 = a1;
	cout<<b2.z<<" "<<a1.x<<endl;
	// a2 = b1; // Cant be done
	// cout<<a2.x<<" "<<b1.z<<endl;
}