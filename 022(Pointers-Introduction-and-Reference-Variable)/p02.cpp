#include <iostream>
// include statement for input/output functions
using namespace std;
int main() {
 int a = 5;  // declaring and initializing an integer variable 'a' with value 5

 // creating pointer of int type and initializing it with the address of 'a'
 int *ptr = &a;

 // printing the address of 'a' using & operator
 cout << &a << endl; 

 // printing the value of pointer 'ptr' which is the address of 'a'
 cout << ptr << endl;

 // accessing and printing the value stored at the address stored in 'ptr'
 // using * operator
 cout << *ptr << endl;

 return 0;
}