#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

void func(auto a,auto b,auto c,auto d,auto e){
	cout<<a<<endl;
	cout<<b<<endl;
	cout<<c<<endl;
	cout<<d<<endl;
	cout<<e<<endl;
	return;
}

int main(){
	func(10,"hello surbhi",3.14, 'Z',true);
	return 0;
}