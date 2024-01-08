/**
 * This C++ program finds the missing number in a given vector of integers.
 * 
 * @return The program is returning 0.
 */

// Alternate Ways for finding the missing number 

// Method : 1:---

// since for a continuos series the numbers start from 1 but the index starts from 0
// so number = index + 1;

#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> arr{1,2,3,4,5,6,7,9};
    int missingNum = 0;
    for (int i = 0; i < arr.size(); i++)
    {
    
        if (arr[i+1] - arr[i] != 1)
        {
            break;
        }
        

        missingNum = arr[i+1] + 1;

    }

    cout << "Missing Number is : " << missingNum << endl;
    
    
    return 0;
}