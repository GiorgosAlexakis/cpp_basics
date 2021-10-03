// arrays_pointers_references.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void copy_fct()
{
	int v1[10] = { 0,1,2,3,4,5,6,7,8,9 };
	int v2[10]; // to become a copy of v1
	for (auto i = 0; i != 10; ++i) // copy elements
	{
		v2[i] = v1[i];
		cout << "v2" << "[" << i << "]:" << v2[i] << endl;
	}
	cout << endl;
}
void print()
{
	int v[] = { 0,1,2,3,4,5,6,7,8,9 };
	for (auto x : v) // for each x in v
		cout << x << '\n';
	for (auto x : { 10,21,32,43,54,65 })
		cout << x << '\n';
	cout << endl;
	// ways of traversing list
}

void increment()
{	/*
	* If we didn’t want to copy the values from v into the variable x, but rather just have x refer to an
	* element, we could write
	*/
	int v[] = { 0,1,2,3,4,5,6,7,8,9 };
	for (auto& x : v) // add 1 to each x in v
	{
		++x;
		cout << x;
	}
	cout << endl;
	cout << "v[0]:" << v[0] << endl;
	// a reference cannot be made to refer to a different object
}

int main()
{
	copy_fct();
	print();
	increment();
	/*
	* References are particularly useful for specifying function arguments. For example:
	* void sort(vector<double>& v); // sort v (v is a vector of doubles)
	* By using a reference, we ensure that for a call sort(my_vec), we do not copy my_vec and that it
	* really is my_vec that is sorted and not a copy of it.
	* When we don’t want to modify an argument but still don’t want the cost of copying, we use a
	* const reference. For example:
	* double sum(const vector<double>&)
	*/

	/*
	* Null pointer:
	* nullptr
	* We use it when we have on object to point available,example: end of list.
	* When we use pointers it's wise to check if the pointer is nullptr because
	* we always want to ensure dereferencing a pointer is valid.
	*/
}

