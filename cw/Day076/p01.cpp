#include <iostream>
#include <vector>
#include <string.h>
using namespace std;
  bool isPalindrome(string current){
      int i = 0; 
      int j = current.size();
      while(i<=j){
          if(current[i]!=current[j]){
              return false;
          }
          else{
              i++;
              j--;
          }
      }
      return true;
  }
  int count(vector<string> str){
      int counter = 0;
      for(int i=0; i<str.size();i++){
          string current = str[i];
          if(isPalindrome(current)){
              counter++;
          }
      }
      return counter;
  }
int main() {
    string inp;
    cin >> inp;
    cout << inp << endl;
    vector<string> str;
    int size = inp.size();
    for(int i = 0; i<size;i++)
    { 
       for(int j = 0; j<size;j++)
      {
          string temp = inp.substr(i,j);
          str.push_back(temp);
       }
    }
    cout << count(str) << endl;
    return 0;
}