#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;


int main(){
	//--------------------Int Pointer to a non const var---------------------
	// int x = 10;
	// int * p = &x;
	
	// cout<<*p<<endl;
	// cout<<p<<endl;
	// (*p)++;
	// cout<<*p<<endl;
	// p++;
	// cout<<p<<endl;

	//--------------------const int pointer to non const var-----------------

	// const int* ptr;
	// int x = 40;
	// int y = 50;

	// ptr = &x; // works fine but in read only mode
	// (*ptr)++;// (increment of read-only location '* ptr')

	// ptr =&y;
	// ptr++; // Works fine, increment the address of the pointer initially pointer to y now pointing to some random memory


	//--------------------const int pointer to const int var-----------------
	// const int y=50;
	// int const y=50;
	// y = 100;// cant be dont like this bcz its const int
	// invalid conversion from 'const int*' to 'int*'
	// int * ptr= &y; // cant give const int variable address to a int pointer
	// const int* ptr = &y; // valid
	// int const* ptr = &y; //valid

	// int * const ptr = &y;//pointer const ho jaega ye
	// (*ptr)++; // not posiible since var is const(increment of read-only)
	// cout<<*ptr<<endl;
	// cout<<ptr<<endl;
	// ptr++;
	// cout<<*ptr<<endl;
	// cout<<ptr<<endl;

	//--------------------const int const pointer to non const var-----------------	

	// int x = 10;
	// const int *const ptr;
	// ptr = &x;// cannot redefine the const pointer, val should be given in time of declaration only

	// const int *const ptr=&x; // only valid 

	// *ptr = 30; // ERROR: cannot modify the data pointed to by ptr
	// (*ptr)++;// cant do this as the pointer is of type const int i.e read only
	// ptr++;// since its const pointer address also cant be changed 

	//but we can modify x val by using x itself
	// x++;
	// x--;


	//--------------------Pointer to a Pointer with const Variations------------------


	// example 1: const int *const *ptr

	const int val = 10;
	const int *const ptr1 = &val;// cant change val as well as address from anywhere

	cout<<*ptr1<<endl;
	cout<<ptr1<<endl;
	// (*ptr1)++; // not allowed
	// ptr1++; // not allowed



	//case2: try modifying values through pointer to pointer 


	// const int val = 10;
	// const int *const ptr1 = &val;
	// const int *const *ptr2 = &ptr1;

	// *ptr2 = &another_val;  // ERROR: cannot change the `const int *const` pointer
	// **ptr2 = 30;           // ERROR: cannot modify `const int` data



//Example 2: int *const *const ptr
	// int x = 10;
	// int *const ptr1 = &x;
	// int *const *const ptr2 = &ptr1;

	// *ptr2 = &another_val;  // ERROR: `ptr2` is const, cannot assign it to another pointer
	// **ptr2 = 30;           // OK: can modify `int` data through `**ptr2`


//--------------------Pointer to a const Array (const data)------------------


	const int arr1[] = {1, 2, 3};  // Array with constant data
	int arr2[] = {4, 5, 6};

	const int *ptr = arr1; // Points to constant data
	ptr = arr2; // OK: pointer can point to a different array

	*ptr = 10; // ERROR: cannot modify data through ptr
	ptr[1] = 20; // ERROR: cannot modify elements of const int array



//----------------------const Pointer to Non-const Array-------------------------

	int arr[] = {1, 2, 3};
	int *const ptr = arr; // Constant pointer to non-const array data

	*ptr = 10; // OK: can modify array elements through ptr
	ptr[1] = 20; // OK: can modify elements of array
	ptr = arr2; // ERROR: cannot reassign a const pointer



//----------------------const Pointer to const Array-------------------------


	const int arr[] = {1, 2, 3};
	const int *const ptr = arr; // Constant pointer to constant data

	*ptr = 10; // ERROR: cannot modify data through const pointer
	ptr[1] = 20; // ERROR: cannot modify elements of const int array
	ptr = arr2; // ERROR: cannot reassign a const pointer


//--------------Pointer to a Pointer with const Variations in Arrays-------------------------

//Example 1: const int *const *ptr
	const int arr1[] = {1, 2, 3};
	const int arr2[] = {4, 5, 6};
	const int *const arrPtrs[] = {arr1, arr2}; // Array of constant pointers to const data

	const int *const *ptr = arrPtrs; // Pointer to constant pointer to constant data

	*ptr = arr2;  // ERROR: cannot change the const int *const
	**ptr = 10;   // ERROR: cannot modify const int data

//Example 2: int *const *const ptr


	int arr1[] = {1, 2, 3};
	int arr2[] = {4, 5, 6};
	int *const arrPtrs[] = {arr1, arr2}; // Array of constant pointers to non-const data

	int *const *const ptr = arrPtrs; // Constant pointer to constant pointers to non-const data

	**ptr = 10;   // OK: can modify non-const int data through **ptr
	*ptr = arr2;  // ERROR: cannot change a const pointer
	ptr = &arrPtrs[1];  // ERROR: ptr itself is const

}