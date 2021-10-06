/*
* A class has a set of members, which can be data, function, or type members. The interface is defined
* by the public members of a class, and private members are accessible only through that interface.
* A member ‘‘function’’ with the same name as its class is called a constructor, that is, a function
* used to construct objects of a class.
* https://www.cplusplus.com/doc/tutorial/classes/
* An object is an instantiation of a class. In terms of variables, a class would be the type, 
* and an object would be the variable.
* 
* private members of a class are accessible only from within other members of the same class (or from their "friends").
* protected members are accessible from other members of the same class (or from their "friends"), 
* but also from members of their derived classes.
* 
* public members are accessible from anywhere where the object is visible.
* 
* By default, all members of a class declared with the class keyword have private access for all its members. 
* Therefore, any member that is declared before any other access specifier has private access automatically.
* 
* scope operator :: ,we use it to define a member of a class outside the class itself.
* The scope operator (::) specifies the class to which the member being defined belongs, granting exactly 
* the same scope properties as if this function definition was directly included within the class definition.
*/

#include <iostream>
using namespace std;

class Rectangle {
  int width, height;//data members should be private
public:
  void set_values(int, int);
  int area() { return width * height; }
};
void Rectangle::set_values(int x, int y) {
  width = x;
  height = y;
}

int main()
{
  Rectangle rect;
  rect.set_values(3,4);
  cout << "area: " << rect.area();
  return 0;
}
