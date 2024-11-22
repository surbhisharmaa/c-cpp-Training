#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

//base case
template<typename T>
void myFunc(T x){
	cout<<x<<endl;
}


// Variadic function just like recursion
template<typename T, typename... varArgs>
void myFunc(T x, varArgs... v){

	cout<<x<<endl;
	myFunc(v...);
}

int main(){
	myFunc(1,'a',"hello",2.4);
	myFunc(2.5, "Hello", 'A', 42);

}
