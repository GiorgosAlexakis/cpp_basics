#include <iostream>

using namespace std;

/*
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
*/
int main()
{

	int myvar = 0;

	cout << "The memory address of the variable myvar is: " << &myvar << endl;
	return 0;
}