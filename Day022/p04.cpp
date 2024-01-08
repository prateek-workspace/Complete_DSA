// WAP for replacing elements in arrays

#include<iostream>
using namespace std;
int main()
{

   int arr[5]={1,3,5,7,9};

   cout << arr[3] << endl;

   for (int i = 0; i < 5; i++)
   {
    arr[i]=1;
   }


   for (int i = 0; i < 5; i++)
   {
    cout << arr[i] << endl;
   }
    

}