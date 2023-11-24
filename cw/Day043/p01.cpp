/**
 * The code sorts an array of colors (represented by integers) in-place using the Dutch National Flag
 * algorithm.
 * 
 * @return The code is returning 0, which is the exit status of the program.
 */
// sort colors LeetCode - 75
#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
int main()
{
    
    vector<int> arr{1,1,0,2,0,1,2,0,1};
    int least, mid= 0;
    int high = arr.size() - 1; 
    while (mid<=high)
    {
        if (arr[mid]==0)
        {
            swap(arr[mid], arr[least]);
            least++;
            mid++;
        }
        else if (arr[mid]==1)
        {
            mid++;
        }
        else if (arr[mid]==2)
        {
            swap(arr[mid], arr[high]);
            high--;
        }
    }

    // printing the array

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i];
    }
    return 0;
}