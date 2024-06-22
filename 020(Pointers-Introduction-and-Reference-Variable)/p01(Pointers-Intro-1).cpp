/**
 * This C++ program declares two variables, assigns them values, and then prints the values and
 * addresses of the variables.
 * 
 * @return The main function is returning an integer value of 0.
 */
#include <iostream>
using namespace std;

int main() {
  // declaring variables's value
  int a = 5;
  int b = 6;
  // printing value of variable
  cout << a << endl;
  cout << b << endl;
  // printing address of the variable "a" that is accesed from the symbol table
  cout << &a << endl;
  cout << &b << endl;
  return 0;
}