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