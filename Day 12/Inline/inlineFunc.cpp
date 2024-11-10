#include <iostream>
#include <cstring>
#include <string>
using namespace std;


class A{
public:
	A(){

	}

	inline void inlineMemFunc(); // declaration should be outside of the class 
};

void A::inlineMemFunc(){
	cout<<"Inside Inline memFunc"<<endl;
}

int main(){
	A a;
	a.inlineMemFunc();
	return 0;
}