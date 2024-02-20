/**
 * The function `findKey` recursively searches for a key in an array and prints the index and number of
 * occurrences of the key if found.
 * 
 * @param arr The `arr` parameter in the code represents an array of integers. In this case, the array
 * contains the elements {1, 2, 6, 615, 64, 3, 7, 84, 0, 6}.
 * @param n The variable `n` in this code represents the number of elements in the array `arr`. In this
 * specific example, `n` is initialized to 10, indicating that the array `arr` contains 10 elements.
 * @param i The variable `i` in the given code represents the index of the array element being
 * currently checked during the recursive search for the key. It starts at 0 and increments by 1 in
 * each recursive call until it reaches the end of the array.
 * @param key The `key` variable in the code represents the value that you are searching for within the
 * array `arr`. In this specific example, the key value is set to 6, and the program is searching for
 * the occurrences of this key within the array.
 * 
 * @return The `findKey` function is a void function, so it does not return any value. It recursively
 * searches for the key in the array and prints the index where the key is found along with the number
 * of times the key is present in the array.
 */
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