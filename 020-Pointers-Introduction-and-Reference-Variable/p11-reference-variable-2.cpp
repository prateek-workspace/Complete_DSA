#include <iostream>
using namespace std;

void solve(int b){
//   here value is pass by value so in this a copy of a is created and that is updating, so original a's value doesn't changes
  ++b;
}

void solve2(int& b){
//   here reference variable is passed and is pointing towards same address on which value of a is stored and when updating, the original a's value changes
  ++b;
}


int main() {

  int a = 5;

  cout << "before" << endl;
  cout << a << endl;

  solve(a);

  cout << "after solve " << endl;
  cout << a << endl;

  int& b = a;

  solve2(b);

  cout << "after solve 2 " << endl;
  cout << a << endl;

  return 0;
}