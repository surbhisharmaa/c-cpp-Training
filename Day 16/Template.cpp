#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;


template<typename A>
A Maxfunc(A a, A b){
	return a>b ? a:b;
}

string Maxfunc(string s1,string s2){
	cout<<s1.size()<<" "<<s2.size()<<endl;
	return s1.size()>s2.size() ? s1 : s2;
}


int main(){ 
	// cout<<Maxfunc(10,20)<<endl; //20
	// cout<<Maxfunc(7.8,9.7)<<endl; // 9.7
	// cout<<Maxfunc('Y','z')<<endl; // take ascii value
	// cout<<int(Maxfunc('T','O'))<<endl; //typecasting 
	// // cout<<Maxfunc(10.00,20)<<endl;//cant give diff datatypes 

	// cout<<Maxfunc<double>(2.5,2)<<endl; //converts both data type in double
	// cout<<Maxfunc<int>(2.8,2)<<endl; // converts both data in int
	cout<<(string)Maxfunc("EPAM","EPAM Systems")<<endl;
	return 0;
}








