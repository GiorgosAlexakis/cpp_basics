#include <iostream>
#include <vector>
using namespace std;


void print_vector_left_to_right(const vector<int>& v)
{
  /*
  auto keyword declares a variable whose type is deduced from the initialization expression in its declaration
  https://www.cplusplus.com/reference/vector/vector/begin/
  In an expression, prefix unary* means "contents of"
  */

  /*
  * To avoid copying the vector use: const vector<int>& v 
  * const because we don't want to modify anything
  */
  cout << "Printing from left to right" << endl;
  for (auto i = v.begin(); i != v.end(); ++i) cout << *i << " ";
  cout << endl;
}
void print_vector_right_to_left(vector <int> v)
{
  /*
  https://www.cplusplus.com/reference/vector/vector/rbegin/
  */

  cout << "Printing from right to left" << endl;
  for (auto i = v.rbegin(); i != v.rend(); ++i) cout << *i << " ";
  cout << endl;
}
void print_vector_size(vector<int> v)
{

  cout << "The size of the vector is: " << v.size() << endl;
}
void resize_copy_of_vector(vector<int> v)
{
  v.resize(3);
  cout << "Resized (copied) vector:" << endl;
  print_vector_size(v);
}
void resize_vector(vector<int>& v)
{
  v.resize(3);
  cout << "Resized vector (inside function that takes as an argument, the address of a vector)" << endl;
  print_vector_size(v);
}
void erase_at_position(vector<int>& v)
{

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
  If you know the size,use this:
  vector<int> V(size);
  for(int i =0;i<size;i++)
  {
    cin>>V[i];
  }
  */

  print_vector_left_to_right(g1);
  print_vector_right_to_left(g1);
  cout << endl;
  cout << "Before adding an element:" << endl;
  print_vector_size(g1);
  g1.push_back(10);
  cout << "After adding an element:" << endl;
  print_vector_size(g1);
  cout << endl;

  resize_copy_of_vector(g1);
  cout << "We have resized a copy of the vector" << endl;
  cout << "so we don't expect the original vector to have a different size" << endl;
  print_vector_size(g1);
  cout << endl;

  cout << "What happens if we use the Address Operator (&) ?" << endl;
  resize_vector(g1);
  cout << "Calling from main" << endl;
  print_vector_size(g1);
  cout << "Succesfully resized";
  cout << endl;
  print_vector_left_to_right(g1);
  cout << endl;

  cout << "Reference Operator g : g1[2] = " << g1[2] << endl;
  cout << "at : g1.at(0) = " << g1.at(0) << endl;
  cout << "front() : g1.front() = " << g1.front() << endl;
  cout << "back() : g1.back() = " << g1.back() << endl;
  cout << endl;

  vector<int> v;
  //this declaration specifies that g1 is a vector of type int 

  for (int i = 1; i <= 5; i++) v.push_back(i+10);


  return 0;
}