#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

//Virtual table is associated with a class where as
// virtual pointer is associated with an object


class Object
{
public:
 virtual float Area() 
	{ return 0.0f; }
};
 
class Circle:public Object
{
public:
float Area()  { return 1.0f; }
 
};
 
class Rect:public Object
{
public:
float Area() //override //Override keyword is not necessary to use developer use it for there understanding
{ return 2.0f; }
 
};
 
class Square:public Object
{
public:
float Area()
{ return 3.0f; }
 
};
 
void GetFun(Object *ptr)
{
	cout<<ptr->Area()<<endl;
}
 
int main()
{
	Circle *pCircle=new Circle;
	Square *pSquare=new Square;
	Object *pRect = new Rect; // there should be many classes who inherit from a 
// base class to generalise the call we make a base class pointer then through 
// virtual it determines which class func it belngs to.

	// GetFun(pSquare);
	// GetFun(pCircle);
	// GetFun(pRect);

	// cout<<sizeof(Object)<<endl; //1 (without virtual)
	// cout<<sizeof(Object)<<endl; //4 (with virtual)(bcz it is maintaining a virtual table)


	int *p = new int[10]; //40 size---- os finds the location that has 40 bytes memory contigously
	// memset(p,-1,sizeof(p));
	int *pp = p;
	--pp;
	cout<<*pp<<endl;
	*p = 10;
	cout<<*p<<endl;
	int*p2 = p+1;
	delete[] p;
	// cout<<p2<<endl;
	cout<<*p<<endl;

	// delete ptr;
	{
		// call destr
		//deassign of vptr
		//free memory
	}

	// delete[] ptr;
	{
		//loook for prev meme for count, get the count
		//iterate each ele and call destr
		//detaching vptr for each ele
		//free memory at a single go
	}
	return 0;
}

