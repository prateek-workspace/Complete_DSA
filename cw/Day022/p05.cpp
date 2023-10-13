// WAP for Linear Search in array.

#include<iostream>
using namespace std;

bool find(int arr[],int size,int n)
{

    for (int i = 0; i < size; i++)
    {
    
        if (arr[i] == n)
        {
            return true;
        }

    }  

        return false;

}

int main()
{

   int arr[5]={1,3,5,7,9};
   int size = 5;
   int n;

    cout << "Enter element you have to search : " << endl;
    cin >> n;

    if (find(arr,size,n))
    {
        cout << "Found" << endl;
    }
    else 
    {
        cout << "Not Found" << endl;
    }
    

}