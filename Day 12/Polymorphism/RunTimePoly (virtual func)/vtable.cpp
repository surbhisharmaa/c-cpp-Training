#include<iostream>
using namespace std;
 
class A {
public:
    A() {
        cout << "A constructor !" << endl;
    }
    virtual void fun1() {
        cout << "A fun1()" << endl;
    }
 
    virtual void fun2() {
        cout << "A fun2()" << endl;
    }
};
 
class B {
public:
    B() {
        cout << "B constructor !" << endl;
    }
    void fun1() {
        cout << "B fun1()" << endl;
    }
    virtual void fun3() {
        cout << "B fun3()" << endl;
    }
 
};
 
class C :virtual public A,  virtual public B {
public:
    C() {
        cout << "C constructor !" << endl;
    }
    void fun1() {
        cout << "C fun1()" << endl;
    }
    void fun3() {
        cout << "B fun3()" << endl;
    }
    virtual void fun4() {
        cout << "B fun4()" << endl;
    }
};
 
// class D :public C {
// public:
//    D() {
//        cout << "D constructor !" << endl;
//    }
//    virtual void fun5() {
//        cout << "D fun5()" << endl;
//    }
// };
 
 
class D :virtual public A, virtual public B, public C {
public:
    D() {
        cout << "D constructor !" << endl;
    }
    virtual void fun5() {
        cout << "D fun5()" << endl;
    }
};
 
int main() {
 
 
    A a;
    B b;
    C c;
    D d;
 
 
    cout << sizeof(A) << endl;  //4 -- 8
    cout << sizeof(B) << endl;  //4 -- 8
    cout << sizeof(C) << endl;  //8 -- 16
    //cout << sizeof(D) << endl;  //  -- 16
    cout << sizeof(D) << endl;  //  -- 8   
    return 0;
}


//size not so clear