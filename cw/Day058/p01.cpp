// oddly repeating number.

// Solved using XOR opeartor.
// Time Complexity --> O(n) & Space Complexity --> O(n).
// #include<iostream>
// #include<vector>
// using namespace std;
// int main()
// {
    
//     int arr[] = {1,4,4,2,2,4,4,3,3,5,5};
//     int size = sizeof(arr)/sizeof(int);
//     int ans = 0;

//     for (int i = 0; i < size; i++)
//     {
//         ans = arr[i]^ans;  
//     }

//     cout << "Oddly occuring element is : " << ans << endl;
     
//     return 0;
// }


// Using Indexing.

// Time Complexity --> O(n), Space Complexity --> O(1).

#include<iostream>
#include<vector>
using namespace std;
int main()
{

    int arr[] = {1,1,4,4,2,2,4,4,2};
    int size = sizeof(arr)/sizeof(int);
    for (int i = 0; i <= size; i++)
    {
        if (i%2!=0 && arr[i]==arr[i+1])
        {
            cout << "Oddly occuring element is : " << arr[i-1] << endl; 
            break;          
        }  
    }
    
    return 0;
}