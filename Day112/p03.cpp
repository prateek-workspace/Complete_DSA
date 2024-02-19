#include <iostream>
#include <limits.h>
using namespace std;
void findMax(int arr[], int& n, int i, int& maxi){
  // here maxi is pass by reference  so the origina maxi of main is changing if arr[i] > maxi 
  // base case
  if(i>= n) return;
  // solving first only baki recursion sambhal lega 
  if(arr[i]>maxi){
    maxi = arr[i];
  }
  // recursive call 
  findMax(arr,n,i+1,maxi);
}
void findMin(int arr[], int& n, int i, int& mini){
  // here maxi is pass by reference  so the origina mini of main is changing if arr[i] < mini 
  // base case
  if(i>= n) return;
  // solving first only baki recursion sambhal lega 
  if(arr[i]<mini){
    mini = arr[i];
  }
  // recursive call 
  findMin(arr,n,i+1,mini);
}
int main() {
  int arr[] = {1,2,6,615,64,3,7,84,0};
  int n = 9;
  int i = 0;
  int maxi = INT_MIN;
  int mini = INT_MAX;
  findMax(arr,n,i,maxi);
  findMin(arr,n,i,mini);
  cout << "Maximum number in array is : " << maxi << endl;
  cout << "Minimum number in array is : " << mini << endl;
  return 0;
}