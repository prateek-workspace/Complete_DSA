/**
 * The above code implements the selection sort algorithm to sort an array of integers in ascending
 * order.
 * 
 * @return The main function is returning an integer value of 0.
 */
// Selection Sort
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> arr = {19,12,10,11,4,5};
    int size = arr.size();
    // traversing the array --> representing the rounds as there is no need to check for last element(greatest one) so range is 0 to (n-1).
    for (int i = 0; i < arr.size()-1; i++)
    {

        // finding smaller element in the remaining array.

        for (int j = i+1; j < arr.size(); j++)
        {
            if (arr[j]<arr[i])
            {
                swap(arr[i],arr[j]);
            }            
        }
    }

    // printing the array.

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}