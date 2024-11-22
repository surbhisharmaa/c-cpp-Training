#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;




// class A
// {
//     // int m;
//     // public:
//     // A(){
//     //     m =4;
//     // }
//     // A(const A& rhs){
//     //     this->m = rhs.m;
//     // }

//     int* m;
//     public:
//     A(){
//         m = new int;
//         *m = 4;
//     }
//     A(const A& rhs){
//         // this->m = rhs.m; //dangling pointer due to shallow copy
//         //copy semantics (mem allocation)
//         this->m = new int;
//         *this->m = *rhs.m;
//     }

//     A(A && rhs){ //move constructor
//         this->m = rhs.m;
//         rhs.m = nullptr;
//     }

//     ~A(){
//         if(m) delete m;
//     }

//     A& operator=(const A &rhs){ // & - l value ref
//         m = new int;
//         *m = rhs.m;
//     }

//     A& operator=(A &&rhs){ // && - r val ref
//         m = rhs.m;
//         return *this;
//     }
// };

// int main(){
//     A o1;
//     A o2 = o1; //memcpy
//     A o2 = std::move(o1); // calling move constr o1 become null o2 hold data,(static casting)
//     A o3;

//     o3 = o1;

// }


class A
{
    int *m;
    mycls oo;
public:
    A()
    {
        m = new int;
        *m = 4;
    }
    A(const A &rhs)
        : oo(rhs.oo)
    {
        this->m = new int;
        *this->m = *rhs.m;
        
    }
    A(A && rhs)
        : oo(std::move(rhs.oo))
    {
        this->m = rhs.m;
        rhs.m = nullptr;
    }
    ~A()
    {
        if (m)
            delete m;
    }
 
    A& operator = (const A &rhs) // l value ref
    {
        m = new int;
        *m = *rhs.m;
        oo = oo;
 
        return *this;
    }
 
    A& operator=(A &&rhs) // r value ref
    {
        m = rhs.m;
        oo = std::move(rhs.oo);
 
        return *this;
    }
    void dataprocess()
    {
        if(m)
        cout << *m;
    }
};
 
A fun(A& x) // copy constr
{
    A y;
    return y; // copy constr
}
void main()
{
    A o1;
    A o2 = std::move(o1); // memcpy
    A o4(o2);
    o1.dataprocess();
    A o3;
    o3 = o1;
 
    o3=fun(o1);
 
    int a = 5; // r value ref
    int b = a; // l value ref
}