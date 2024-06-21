#include <iostream>
using namespace std;

int main() {

  int a = 7;

  int*p = 0;

  *p = a;

// it throws run time error bcz ptr is a null ptr and we are going to reference it the value of a
  cout << *p << endl;
  return 0;
}