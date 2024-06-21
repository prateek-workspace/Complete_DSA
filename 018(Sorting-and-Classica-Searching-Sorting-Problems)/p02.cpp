/**
 * The above code implements the Bubble Sort algorithm to sort an array of integers in ascending order.
 * 
 * @return The main function is returning an integer value of 0.
 */
// Bubble Sort
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> arr = {19,12,10,11,4,5};
    int size = arr.size();
    // traversing the array --> representing the rounds as there is no need to check for last element(greatest one) so range is 0 to (n-1).

    
    // for (int i = 0; i < arr.size()-1; i++)
    // {

    //     // finding larger element in the remaining array.

    //     for (int j = 0; j < size - i - 1; j++)
    //     {
    //         if (arr[j]>arr[j+1])
    //         {
    //             swap(arr[j],arr[j+1]);
    //         }            
    //     }
    // }

    for (int i = 1; i < arr.size(); i++)
    {

        // finding larger element in the remaining array.
        int swapped = 0;
        for (int j = 0; j < size - i; j++)
        {
            if (arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                swapped++;
            } 
                   
        }
        if(swapped == 0){
            // already sorted ho chuka hai, no need to check furthur and swapping
            break;
        }
    }

    // printing the array.

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}