
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> arr = {19,12,10,11,4,5};
    int size = arr.size();
    // traversing the array
    for (int i = 0; i < arr.size()-1; i++)
    {

        // finding smaaler element in the remaining array.

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