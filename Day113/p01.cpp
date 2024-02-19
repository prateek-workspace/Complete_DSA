#include <iostream>
using namespace std;
int power(int n){
  // base case
  if(n == 0) return 0;
  else if( n == 1) return 2;
  // solving first only baki recursion sambhal lega 
  if(n%2==0){
    return power(n>>1) * power(n>>1);    
  }
  else{
    return power(n>>1) * power(n>>1) * 2;
  }
  // recursive call 
  return power(n-1);
}
int main() {
  int n;
  cout << "Enter number upto which you want to raise power : " << endl;
  cin >> n; 
  cout << power(n) << endl;
  return 0;
}