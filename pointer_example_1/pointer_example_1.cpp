// pointer_example_1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;
/*
* Write a C++ program to find the max of an integral data set. 
* The program will ask the user to input the number of positive data values 
* in the set and each value. The program prints on screen a pointer 
* that points to the max value.
*/
void print_vector_left_to_right(const vector<int>& v)
{
    cout << "Printing inserted array:" << endl;
    for (auto i = v.begin(); i != v.end(); ++i) cout << *i << " ";
    cout << endl;
}
int address_of_max_value(const vector<int>& v)
{
	int max = 0;
	int* pointer_to_max = nullptr;
	for (auto i = v.begin(); i != v.end(); i++)
	{
		int value = *i;
		if (value >= max) 
		{
			max = value;
			pointer_to_max = &max;
		}
	}
	if (pointer_to_max == nullptr) return -1;
	else {
		cout << "Memory address of pointer pointing to the max value: " << pointer_to_max << endl;
		return *pointer_to_max;
	}
	
}
int main()
{
	int n;
	cout << "Insert size of array:" << endl;
	cin >> n;
	vector<int> input_vector(n);
	cout << "Now insert the numbers of the array" << endl;
	for (int i = 0; i < n; i++)
	{
		cin >> input_vector[i];
	}
	print_vector_left_to_right(input_vector);
	cout << "Max value(we return the dereferenced pointer(the integer value):" << address_of_max_value(input_vector);
}
