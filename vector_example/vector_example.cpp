#include <iostream>
#include <vector>
using namespace std;


void print_vector_left_to_right(vector <int> v)
{
    /*
    auto keyword declares a variable whose type is deduced from the initialization expression in its declaration
    https://www.cplusplus.com/reference/vector/vector/begin/
    In an expression, prefix unary* means "contents of"
    */
    cout << "Printing from left to right" << "\n";
    for (auto i = v.begin(); i != v.end(); ++i) cout << *i << " ";
    cout << "\n";
}
void print_vector_right_to_left(vector <int> v)
{
    /*
    https://www.cplusplus.com/reference/vector/vector/rbegin/
    */

    cout << "Printing from right to left" << "\n";
    for (auto i = v.rbegin(); i != v.rend(); ++i) cout << *i << " ";
    cout << "\n";
}
void print_vector_size(vector<int> v)
{

    cout << "The size of the vector is: " << v.size() << "\n";
}
void resize_copy_of_vector(vector<int> v)
{
    v.resize(3);
    cout << "Resized (copied) vector:" << "\n";
    print_vector_size(v);
}
void resize_vector(vector<int>& v)
{
    v.resize(3);
    cout << "Resized vector (inside function that takes as an argument, the address of a vector)" << "\n";
    print_vector_size(v);
}

int main()
{

    /*
    https://www.cplusplus.com/reference/vector/vector/
    https://www.geeksforgeeks.org/vector-in-cpp-stl/
    */
    vector<int> g1;
    //this declaration specifies that g1 is a vector of type int 

    for (int i = 1; i <= 5; i++) g1.push_back(i);
    /*
    Adding elements to the vector
    https://www.cplusplus.com/reference/vector/vector/push_back/
    */

    print_vector_left_to_right(g1);
    print_vector_right_to_left(g1);
    cout << "\n";
    cout << "Before adding an element:" << "\n";
    print_vector_size(g1);
    g1.push_back(10);
    cout << "After adding an element:" << "\n";
    print_vector_size(g1);
    cout << "\n";

    resize_copy_of_vector(g1);
    cout << "We have resized a copy of the vector" << "\n";
    cout << "so we don't expect the original vector to have a different size" << "\n";
    print_vector_size(g1);
    cout << "\n";

    cout << "What happens if we use the Address Operator (&) ?" << "\n";
    resize_vector(g1);
    cout << "Calling from main" << "\n";
    print_vector_size(g1);
    cout << "Succesfully resized";
    print_vector_left_to_right(g1);
    cout << "\n";

    cout << "Reference Operator g : g1[2] = " << g1[2] << "\n";
    cout << "at : g1.at(0) = " << g1.at(0) << "\n";
    cout << "front() : g1.front() = " << g1.front() << "\n";
    cout << "back() : g1.back() = " << g1.back() << "\n";
    cout << "\n";


    return 0;
}