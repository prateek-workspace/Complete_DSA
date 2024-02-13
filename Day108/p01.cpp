#include <iostream>
using namespace std;

void util(int *p){
//   here value is pass by value so in this a copy of p is created and that is also pointing towards a so updating p doesn't have any effect on the code
  p = p + 1;
}

void util2(int *p){
//   here value is pass by reference so in this a copy of p is created and that is also pointing towards a.

// but here we are not updating p but we are going to update the value to which p is pointing bcs=z we are updating *p

  *p = *p + 1;
}

int main() {

  int a = 5;
  int * p = &a;

  cout << "before" << endl;
  cout << a << endl;
  cout << p << endl;      
  cout << *p << endl;

  util(p);

  cout << "after util " << endl;
  cout << a << endl;
  cout << p << endl;
  cout << *p << endl;

  util2(p);

  cout << "after util 2 " << endl;
  cout << a << endl;
  cout << p << endl;
  cout << *p << endl;

  return 0;
}