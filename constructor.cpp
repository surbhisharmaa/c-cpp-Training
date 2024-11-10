#include <iostream>
#include <cstring>
#include <string>
using namespace std;




// class firstClass{
// 	//member variables
// 	int a;
// 	int b;
// 	const int c = 20;



// const member variable will also get changed with CIL.
// public:
// 	//constructor
// 	firstClass(int x, int y, int z) : a(x) , b(y) , c(z)
// 	{
// 		// a =30;
// 		// b = 40;
// 		// c = 80;
// 	}

//without CIL you cannot modify const member variables it 
//will give an error of assignment of read-only member
// public:
// 	//constructor
// 	firstClass(int x, int y, int z) 
// 	{
// 		a =x;
// 		b = y;
// 		c = z;
// 	}

// 	void getDetails()
// 	{
// 		cout << a << endl;
// 		cout << b << endl;
// 		cout << c << endl;
// 	}

// };

class patient{
	static int count;
public:

	patient(){
		++count;
	}

	static void totalCount(){
		cout<<count<<endl;
	}
};


class inPatients : public patient{
	static int inpCount;
public:
	inPatients(){
		++inpCount;
	}
	static void view_inpCount(){
		cout<<inpCount<<endl;
	}
};

class outPatients : public patient{
	static int outpCount;
public:
	outPatients(){
		++outpCount;
	}
	static void view_outpCount(){
		cout<<outpCount<<endl;
	}
};

class criticalCarePatients : public patient{
	static int ccpCount;
public:
	criticalCarePatients(){
		++ccpCount;
	}
	static void view_ccpCount(){
		cout<<ccpCount<<endl;
	}
};


int patient:: count = 0;
int inPatients:: inpCount = 0;
int outPatients:: outpCount = 0;
int criticalCarePatients:: ccpCount = 0;

int main(){

	inPatients p1;
	inPatients p2;
	outPatients p3;
	outPatients p4;
	criticalCarePatients p5;
	criticalCarePatients p6;
	criticalCarePatients p7;

	patient::totalCount();
	inPatients::view_inpCount();
	outPatients::view_outpCount();
	criticalCarePatients::view_ccpCount();
	
	return 0;

}