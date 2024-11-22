#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

class MyClass{
	int x;
	int y;
	int z;

public:
	//const
	MyClass(int a,int b,int c) : x(a),y(b),z(c) {
		cout<<"inside Constructor"<<endl;
	}


	MyClass(const MyClass& obj){
		cout<<"inside copy Constructor"<<endl;
		this->x = (obj.x);
		this->y = (obj.y);
		this->z = (obj.z);
	}

	// move constructor
	MyClass(const MyClass&& obj):x(move(obj.x)),y(move(obj.y)),z(move(obj.z)){
		cout<<"inside move Constructor"<<endl;
		// x = std::move(obj.x);
        // y = std::move(obj.y);
        // z = std::move(obj.z);

        // // Reset the source object's members
        // obj.x = 0;
        // obj.y = 0;
        // obj.z = 0;
	}

	//move assignment
	MyClass& operator=(const MyClass&& obj){
		cout << "Move Assignment Operator\n";
		if(this != &obj){
			x = std::move(obj.x);
            y = std::move(obj.y);
            z = std::move(obj.z);

            // Reset the source object's members
            // obj.x = 0;
            // obj.y = 0;
            // obj.z = 0;
		}
		return *this;
	}

	void display() const{
		cout<<x<<" "<<y<<" "<<z<<endl;
	}
};

int main(){
	MyClass obj1(40,60,80);
	MyClass obj2 = std::move(obj1);
	obj1.display();
	obj2.display();
	// MyClass obj3(obj1);
	// obj3.display();
}