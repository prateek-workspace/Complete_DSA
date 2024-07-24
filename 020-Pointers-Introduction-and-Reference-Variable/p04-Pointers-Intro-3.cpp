/**
 * This C++ program demonstrates the usage of pointers and the sizeof operator to determine the size of
 * different data types and their corresponding pointers.
 * 
 * @return The program is returning 0, which indicates successful execution.
 */
#include <iostream>
using namespace std;

int main() {
  int a = 5;
  int *ptr = &a;

  char c = 'a';
  char *ch = &c;

  double d = 5.9;
  double *dtr = &d;

  cout << a << endl;
  cout << c << endl;
  cout << d << endl;

  cout << endl << sizeof(a) << endl;
  cout << sizeof(c) << endl;
  cout << sizeof(dtr) << endl;

  cout << endl << sizeof(&a) << endl;
  cout << sizeof(&c) << endl;
  cout << sizeof(&dtr) << endl;

  cout << endl << sizeof(*ptr) << endl;
  cout << sizeof(*ch) << endl;
  cout << sizeof(*dtr) << endl;

  return 0;
}