#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;


// class A{
// public:
// 	A(){

// 	}
// 	void show(){

// 	}
// };

// class B : public A{
// public:
// 	A(){

// 	}
// 	void show(){
		
// 	}
// };

// class C: public A{
// public:
// 	C(){

// 	}
// 	void show(){
		
// 	}
// };

// class D : public B , public C{
// 	public:
// 	D(){

// 	}
// 	void show(){
		
// 	}
// };




using namespace std;
class A {
public:
	A() { cout << "A's constructor\n"; }
	virtual ~A() { cout << "A's destructor\n"; }
	virtual void show() { cout << "Class A\n"; }
	void ff() { cout << "A's fff\n"; }
};
 
class B : virtual public A {
public:
	B() { cout << "B's constructor\n"; }
	virtual ~B() { cout << "B's destructor\n"; }
	void show() { cout << "Class B\n"; }
};
 
class C : virtual public A {
public:
	C() { cout << "C's constructor\n"; }
	void show() { cout << "Class C\n"; }
};
 
class D : public B, public C {
public:
	D() { cout << "D's constructor\n"; }
	void show() { cout << "Class D\n"; }
};


void fun(A *ptr)
{
	ptr->show();
}


int main_____() {
	D d;
	A*ptr = new D;
	fun(&d);
	//delete ptr;
	d.ff();
	return 0;
}




//friend function
class AAA;
class Sample
{
private:
	int a;
public:
	friend void fun(Sample s);
	friend class AAA;
};
class AAA
{
public:
	void fff(AAA a, Sample s);
};
 
void AAA::fff(AAA a, Sample s)
{
	cout << s.a << endl;
}
void fun(Sample s)
{
	cout << s.a << endl;
}