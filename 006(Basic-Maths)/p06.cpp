/**
 * The code calculates the exponentiation of a number using both a fast and slow method and outputs the
 * results.
 * 
 * @param a The base number that will be raised to a power.
 * @param b The variable `b` represents the power to which the number `a` will be raised.
 * 
 * @return The code is returning the result of exponentiation using both the fastExponentiation and
 * slowExponentiation functions.
 */
#include <iostream>
using namespace std;

int fastExponentaion(int a,int b){
  int ans = 1;
  while(b > 0){
    if(b & 1){
      ans = ans * a;
    }
    a = a * a;
    b>>=1;
  }
  return ans;
}

int slowExponentaion(int a, int b){
  int ans = 1;
  for(int i=0;i<b;i++){
    ans = ans * a;
  }
  return ans;
}

int main() {

  int a,b;
  cout << "enter the no" << endl;
  cin >> a;
  cout << "Enter the power raised : " << endl;
  cin >> b;

  cout << "Fast :" << fastExponentaion(a,b) << endl;
  cout << "Slow :" << slowExponentaion(a,b) << endl;

  return 0;
}