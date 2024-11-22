#include<iostream>
using namespace std ;
 
template<typename T > 
void print(T x ){
    cout<<x<<endl;
}
 
template<typename T , typename...Args> 
void print(T first,  Args...args) {
    cout << first << " "<<endl;
    print(args...);
}
 
class Names {
public:
    string name;
    int age;
 
    Names(string n, int a){
        name = n ; 
        age = a ; 
    }
 	
 	//Operator Overloading of <<
   friend ostream& operator<<(ostream &os, const Names& n) {
        os << "Name: " << n.name << ", Age: " << n.age;
        return os;
    }
};
 
 
int main(){
    Names n1("Rohan" , 22 ) ; 
    Names n2("Kopal" , 22 ) ; 
    print( 1,"Hello","Surbhi",5,8.4 , n1 , n2);
    return 0 ;
}



