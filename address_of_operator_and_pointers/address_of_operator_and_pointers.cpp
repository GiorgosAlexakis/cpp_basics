#include <iostream>

using namespace std;

/*
* https://www.cplusplus.com/doc/tutorial/pointers/
* For a C++ program, the memory of the computer is a succession of memory cells, each one byte in size
* and each with a unique memory address.These single-byte memory cells are ordered in a way that allows
* data representations larger than one byte to occupy memory cells that have consecutive addresses.
*/

/*
* This way, each cell can be easily located in memory by means of its unique address.
* When a variable is declared, the memory needed to store its value is assigned to a specific location
* in memory (memory address). The operating system decides (at runtime) where exactly in memory variables
* are stored. However, we can obtain the address of a variable during runtime in order to access data cells
* that are a certain position relative to it.
*/

/*
* Address-of operator(&):
* The address of a variable can be obtained by preceding the name of a variable with an uppersand sign(&)
* known as the address-of operator(&)
* For example:
* 
*/


int main()
{

	int myvar = 0;
	cout << "The value of myvar is: " << myvar << endl;
	cout << "The memory address of the variable myvar is: " << &myvar << endl;
	/*
	* A variable which stores the address of another variable. Pointers are said to point to the variable
	* whose address they store. Pointers can be used to access the variable they are pointing to directly.
	* This is done by preceding the pointer name with dereference operator (*) , the operator can be 
	* read as "value pointed to by"	
	*/
	
	int* foo = &myvar; //assigns foo the address of myvar,general definition type* name;
	/*
	* The declaration of a type needs to include the data type the pointer is going to point to.
	* We need to define the data type because each of them have their own properties. Every pointer
	* occupies the same amount of space in the same computer system. However, the data to which they point to
	* do not occupy the same amount of space nor are the same type. The asterisk in the definition tells us 
	* that this variable is a pointer to an integer, it's not the dereference operator seen below.
	*/
	cout << "We assigned the address of myvar to foo: " << foo << endl;
	int baz = *foo; //baz equal to value pointed to by foo, this asterisk here is called dereference operator
	cout << "We assigned baz the value pointed to by foo (contents of myvar) : " << baz << endl;
	cout << endl;

	cout << "Let's see another example" << endl;
	int firstvalue = 5, secondvalue = 15;	
	int* p1, * p2;
	/*
	* There are three ways to define a pointer:
	* type* name(this one is preferred)
	* type * name
	* type *name
	*/
	cout << "firstvalue: " << firstvalue << endl;
	cout << "secondvalue: " << secondvalue << endl;

	p1 = &firstvalue; //p1 = address of firstvalue
	p2 = &secondvalue; //p2 = address of secondvalue

	cout << "p1: " << p1 << endl;
	cout << "p2: " << p2 << endl;

	*p1 = 10; //value pointed to by p1 = 10
	*p2 = *p1; //value pointed to by p2 = value pointed to by p1

	cout << "*p2: " << *p2 << endl;

	p1 = p2; //p1 = p2

	cout << "p1: " << p1 << endl;
	cout << "p2: " << p2 << endl;

	*p1 = 20; //value pointed to by p1 = 20;

	
	cout << "*p1: " << *p1 << endl;
	cout << "*p2: " << *p2 << endl;
	cout << "firstvalue: " << firstvalue << endl;
	cout << "secondvalue: " << secondvalue << endl;
	
	return 0;
}