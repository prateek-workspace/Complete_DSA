// oddly repeating number.
// Solved using XOR opeartor.
// Time Complexity --> O(n) & Space Complexity --> O(n).
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    
    int arr[] = {1,1,4,4,2,2,4,4,3,3,5,5,3};
    int size = sizeof(arr)/sizeof(int);
    int ans = 0;

    for (int i = 0; i < size; i++)
    {
        ans = arr[i]^ans;  
    }

    cout << "Oddly occuring element is : " << ans << endl;
     
    return 0;
}