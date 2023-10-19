/**
 * This C++ program takes input of an array and finds the missing number in the array.
 * 
 * @return The main function is returning an integer value of 0.
 */

#include<iostream>
#include<vector>
using namespace std;
int main()
{
    
    int m;
    cout << "Enter size of array : " << endl;
    cin >> m;

    vector<int> arr(m);
    int arrSum = 0;

    // taking input of elements 

    for (int i = 0; i < m; i++)
    {
        cout << "Enter value for " << i << " index" << endl;
        cin >> arr[i];
    }
    int n = m + 1;
    int actualSum =((n*n)+n)/2;

    // printing the array 
    for (int i = 0; i < arr.size(); i++)
    {

        cout << arr[i] << "," ;
        arrSum = arrSum + arr[i];       

    }
    cout << endl;
    
    int num = actualSum - arrSum;

    cout << actualSum<< endl;
    cout << arrSum<< endl;

    cout << "Number is : " << num << endl;

    return 0;
}