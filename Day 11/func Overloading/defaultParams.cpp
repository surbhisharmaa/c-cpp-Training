#include <iostream>
#include <cstring>
#include <string>
using namespace std;


// void func(int a){
// 	cout<<"Inside func1"<<endl; //in this case it will give error
// }


void func(int x=0){
	//this func will generate ambiguity 
	//if there is another func declared with same name and same no of parameter
	// redefinition of 'void func(int)' 

	// If there is only one func with default parameters it can we accessed by two ways
	// func() & func(val)
	// func()   ->>> fun(){ int x =0;}
	if(x==0)
		cout<<"inside default fun"<<endl;
	else 
		cout<<"inside default fun with specified parameter"<<endl;

}


void func1(int a,int b,int c=0,int d =0){
	cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
}


int main(){

	//example 1
	func(10);
	func();
	//example 2
	func1(10,20);
	func1(10,20,30);
	func1(10,20,30,40);

}