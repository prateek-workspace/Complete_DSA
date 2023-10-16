// WAP for Linear Search in array.

/**
 * The above code is a C++ program that searches for a given element in an array and returns whether it
 * is found or not.
 * 
 * @param arr An array of integers containing the elements to be searched.
 * @param size The size parameter represents the size of the array. In this case, it is set to 5
 * because the array has 5 elements.
 * @param n The element you want to search for in the array.
 * 
 * @return The function `find` returns a boolean value. It returns `true` if the element `n` is found
 * in the array `arr`, and `false` otherwise.
 */

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