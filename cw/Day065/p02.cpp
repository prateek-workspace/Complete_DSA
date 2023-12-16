// Bubble Sort
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

        // finding larger element in the remaining array.

        for (int j = i; j < size; j++)
        {
            if (arr[i]>arr[j])
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