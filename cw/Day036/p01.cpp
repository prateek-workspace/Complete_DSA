/**
 * This C++ program finds the missing number in a given vector of integers.
 * 
 * @return The program is returning 0.
 */

#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> arr{1,2,3,4,5,6,7,9};
    int size = arr.size() - 1;
    int actualSum = ((arr[size]) * (arr[size] + 1))/2;

    int sum = 0;

    for (int i = 0; i < 8; i++)
    {
    
        sum = sum + arr[i];

    }
    
    int missingNum = actualSum - sum;


    cout << "Missing Number is : " << missingNum << endl;
    
    
    return 0;
}