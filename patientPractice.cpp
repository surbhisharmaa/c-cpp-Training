#include <iostream>
#include <cstring>
#include <string>
using namespace std;


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

	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int ptype;
		cin>>ptype;
		if(ptype==1) inPatients Iobji;

		else if(ptype==2) outPatients Oobji;
		else criticalCarePatients Cobji;
	}

	patient::totalCount();
	inPatients::view_inpCount();
	outPatients::view_outpCount();
	criticalCarePatients::view_ccpCount();
	return 0;

}