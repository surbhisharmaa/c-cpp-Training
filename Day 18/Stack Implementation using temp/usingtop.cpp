#pragma once

#include <iostream>
using namespace std;

template<typename T>
class stackTemplate
{
  T* ptr;
  int maxSize;
  int top;
public:
  
  stackTemplate(int size)
  {
    ptr = new T[size];
    maxSize = size;
    top = -1;
  }

  void push(T element)
  {
    if (sizeOfStack() == maxSize)
    {
      cout << "Overflow" << endl;
    }
    else
    {
      cout<<"Pushed element is: "<<element << endl;
      ptr[++top] = element;
      cout << "Next element will be inserted at: "<<top << endl;
    }
  }

  void pop()
  {
    if (!isEmpty())
    {
      cout << "Popped out element is" << ptr[top]<<endl;
      top--;
    }
    else
    {
      cout << "UnderFlow" << endl;
    }
  }

  void topElement()
  {
    cout << "Top element is" << ptr[top]<<endl;
  }

  int sizeOfStack()
  {
    cout << "Size is: " << top + 1<<endl;
    return top + 1;
  }

  bool isEmpty()
  {
    return (top < 0);
  }
};

