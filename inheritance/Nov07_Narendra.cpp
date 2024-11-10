#include <iostream>
#include <cstring>
#include <string>
#include <stdio.h>
using namespace std;


class A{
public:
	void fun(){
		cout<<"inside A"<<endl;
	}
	// A& operator=(cont A&rhs){
	// 	return *this;
	// }
};

class B : public A{

	int x;
public:
	void fun(){
		cout<<"inside B"<<endl;
	}
	// B& operator=(cont B& rhs){
	// 	return *this;
	// }
	// B& operator=(cont A& rhs){
	// 	return *this;
	// }
};


int main(){
	A a;
	B b;
	a.fun();
	b.fun();
}