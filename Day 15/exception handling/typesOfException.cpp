#include <iostream>
#include <stdio.h>
#include <string>
#include <stdexcept>
#include <exception>
#include <new>
#include <vector>

using namespace std;


class myClass {
public:
  myClass() {

  }
  void memFunc1(int x, int y)
  {
    int a = 20;
    try
    {
      //Exception -1
      //Appraoch-1
      int* p = new int[x * 1000000000];

      ////Approach-2
      // while (true)
      // {
      //  int* ptr = new int[1000000000];
      // }

      ////Exception -2
      //vector<int> intVector;
      //cout << intVector.at(5);

      ////Exception - 3
      // if (y == 0)
      //   throw divideByZeroException();

      int k = x / y;
    }
    catch (exception& ex)
    {
      cout << "exception is: " << ex.what() << endl;
    }
    catch (bad_alloc& ex)
    {
      cout << "exception thrown is: "<<ex.what() << endl;
      cout << "inside bad_alloc exception.." << endl;
    }
    catch (out_of_range& ex)
    {
      cout << "inside out of range exception." << endl;
    }
    catch (divideByZeroException& ex) {
      cout<<"Inside custom Exception Handler" << endl;
    }
    catch (...)
    {
      cout << "Exception is thrown and caught in defailt catch block" << endl;
    }
    cout << "Outside try catch" << endl;
  }

  void memFunc2() {
    throw;
  }


  void memFunc3() {
    try
    {
      //Exception -2
      vector<int> intVector;
      cout << intVector.at(5);
    }
    catch (out_of_range& ex)
    {
      cout << "inside MemFunc3. Exception is: "<<ex.what() << endl;
      cout<<"Re throwing the exception" << endl;
      //throw;
    }

    //cout << "Out side try catch block of MemFunc3();" << endl;
  }

};


int main(){
  myClass obj;
  obj.memFunc1(90,0);
}