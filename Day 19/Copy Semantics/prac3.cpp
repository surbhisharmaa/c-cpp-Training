#include<iostream>

using namespace std;

int main(){
	int a=6;
	int b=8;
	int *p =&a;
	int *q=&b;
	cout<<*p<<" "<<*q;
	q=p;
	cout<<*p<<" "<<*q;
	return 0;
}