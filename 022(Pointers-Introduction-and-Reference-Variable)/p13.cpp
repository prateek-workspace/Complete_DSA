#include <iostream>
using namespace std;

int main() {

  int a = 7;
  int b = 17;

  int* c = &b;

  *c = a;

  cout << a << " " << b << endl;
  return 0;
}