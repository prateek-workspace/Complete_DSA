#include <iostream>
using namespace std;

int main() {

  int a = 5;

//   creating reference variable 

//   syntax : -->
//   data_type & variable_name = old_variable;

  int & b = a;

  cout << "Value using Original Variable : " << a << endl;
  cout << "Value using Reference Variable : " << b << endl;

  cout << "Increment using original variable : " << ++a << endl;
  cout << "Increment using reference variable : " << ++b << endl;

  return 0;
}