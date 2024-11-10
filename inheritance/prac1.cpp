#include <iostream>
#include <cstring>
#include <string>
using namespace std;


class A{
	int x;

public:

	A(){
		x=10;
	}

	void MemFunc(){
		cout<<"Inside MemFunc"<<endl;
		x++;
		cout<<"value of x"<<x<<endl;
	}

	void ConstMemFunc() const{
		cout<<"Inside Const MemFunc"<<endl;
		x++;
		cout<<"value of x"<<x<<endl;
	}
};


int main(){
	A obj;
	obj.MemFunc();
	obj.ConstMemFunc();
	return 0;
}