#include <iostream>
#include <cstring>
#include <string>
using namespace std;


class A{
	mutable int x;
	const int y;

public:

	A(): y(20){ //CIL
		x=10;
		//y=20;//cant modify const mem variable
	}

	void MemFunc(){
		cout<<"Inside MemFunc"<<endl;
		x++;
		cout<<"value of x: "<<x<<endl;
	}

	void ConstMemFunc() const{
		//within the const mem func it make the *this pointer as const therefore we do not able to modify anything within this func
		cout<<"Inside Const MemFunc"<<endl;
		// x++;//cant change non const member in const func (but if mem var is mutable it can be modified)
		//y++;//cant change const member var anywhere
		cout<<"value of x: "<<x<<endl;
		// MemFunc();//cant call non const func which is changing any value
	}
};


int main(){
	A obj;
	// obj.MemFunc();
	// obj.ConstMemFunc();
	A const ConstObj; // const obj can only call const memfunc
	//ConstObj.MemFunc(); // we cannot call a non const mem fun from a const object
	ConstObj.ConstMemFunc();
	return 0;
}