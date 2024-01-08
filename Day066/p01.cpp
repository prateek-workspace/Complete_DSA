/**
 * The above code implements the insertion sort algorithm to sort a vector of integers in ascending
 * order.
 * 
 * @return The program is returning 0.
 */
// Insertion Sort
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    
    vector<int> arr{10,1,7,6,9,14};

    int size = arr.size();

    for (int round = 1; round < size; round++)
    {
        // fetching element

        int element = arr[round];

        // compairing.

        int i;

        for (i = round-1; i >= 0 ; i--)
        {
            if (arr[i]>element)
            {
                // do shifting
                arr[i+1] = arr[i]
;            }
            else{
                // stop
                break;
            }
            
        }
        
        // inserting element at ith position.

        arr[i+1] = element;
        
    }
    
    // printing the array

    for (int j = 0; j < size; j++)
    {
        cout << arr[j] << " ";
    }
    
    return 0;
}