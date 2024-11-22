#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;


class myClass{
public:
	void func(auto x, auto y,auto z){
		cout<<x<<endl;
		cout<<y<<endl;
		cout<<z<<endl;
	}
}; 

int main(){
	myClass obj;
	obj.func(56,"hellooo",false);
	return 0;
}