#include <iostream>
#include <limits.h>
using namespace std;
void findKey(int arr[], int& n, int i, int& key){
  int count = 0;
  // base case
  if(i>= n) return;
  // solving first only baki recursion sambhal lega 
  if(arr[i] == key){
  count++;
  cout << "Key found at : " << i << endl;
  cout << "Key is present " << count << " times" << endl;
  }
  // recursive call 
  return findKey(arr,n,i+1,key);
}
int main() {
  int arr[] = {1,2,6,615,64,3,7,84,0,6};
  int n = 10;
  int i = 0;
  int key = 6;
  findKey(arr,n,i,key);
  return 0;
}