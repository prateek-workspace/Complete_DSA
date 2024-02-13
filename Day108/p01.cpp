#include <iostream>
using namespace std;

void util(int *p){
//   her value is pass by reference so in this a copy of p is created and that is also pointing towards a so updating p doesn't have any effect on the code
  p = p + 1;
}

int main() {

  int a = 5;
  int * p = &a;

  cout << "before" << endl;
  cout << a << endl;
  cout << p << endl;
  cout << *p << endl;

  util(p);

  cout << "after" << endl;
  cout << a << endl;
  cout << p << endl;
  cout << *p << endl;

  return 0;
}