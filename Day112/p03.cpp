/**
 * The given C++ program finds the maximum and minimum numbers in an array using recursive functions.
 * 
 * @param arr arr is an integer array containing the elements {1, 2, 6, 615, 64, 3, 7, 84, 0}.
 * @param n The variable `n` in this code represents the number of elements in the array `arr`. In this
 * specific example, `n` is initialized to 9, indicating that the array `arr` contains 9 elements.
 * @param i The variable `i` in the given code represents the current index being processed in the
 * array during recursion. It is used to iterate over the elements of the array recursively in the
 * functions `findMax` and `findMin`.
 * @param maxi The `maxi` parameter in the `findMax` function is used to store the maximum value found
 * in the array. It is passed by reference so that its value can be modified within the function and
 * the updated maximum value can be retained after the function call.
 * 
 * @return The program is not returning any value explicitly. It simply prints out the maximum and
 * minimum numbers in the array and then returns 0 at the end of the main function.
 */
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