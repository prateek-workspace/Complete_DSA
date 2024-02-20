/**
 * The function `findDigits` recursively extracts and prints the digits of a given number in reverse
 * order.
 * 
 * @param n The code you provided is a C++ program that takes an integer input from the user and then
 * recursively finds and prints each digit of the input number in reverse order.
 * 
 * @return The function `findDigits` returns `void`, which means it does not return any value.
 */
#include <iostream>
using namespace std;
void findDigits(int n){
  // base case
  if(n == 0) return;
  // recursive call 
  findDigits(n/10);
  // solving first only baki recursion sambhal lega 
  int digit = n%10;
  cout << digit << " ";
}
int main() {
  int n;
  cout << "Enter number : " << endl;
  cin >> n; 
  findDigits(n);
  return 0;
}