/**
 * The above code is solving the problem of finding the oddly occurring number in an array using
 * different methods such as XOR operator, indexing, and binary search.
 * 
 * @param arr [1,1,4,4,2,2,4,4,2]
 * 
 * @return The code is returning the index of the oddly occurring number in the array.
 */


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


// Using Indexing & simple method.

// Time Complexity --> O(n), Space Complexity --> O(1).

// #include<iostream>
// #include<vector>
// using namespace std;
// int main()
// {

//     int arr[] = {3,1,1,4,4,2,2,4,4,2,2};
//     int size = sizeof(arr)/sizeof(int);

//     //looping entire array

//     for (int i = 0; i <= size; i++)
//     {

//     //visiting only odd indexes and verifying next elements equality.

//         if (i%2!=0 && arr[i]==arr[i+1])
//         {
//             cout << "Oddly occuring element is : " << arr[i-1] << endl; 
//             break;          
//         }  
//     }
    
//     return 0;
// }


// Using Indexing & Binary Search method.

// Time Complexity --> O(n), Space Complexity --> O(1).

#include<iostream>
#include<vector>
using namespace std;
int solve(vector<int> arr){
    int s = 0;
    int e = arr.size() - 1;
    int mid = s + (e - s)/2;

    while (s<=e)
    {
        if (s == e)
        {
            return s;
        }
        
        if (mid%2==0)
        {
            if (arr[mid] == arr[mid+1])
            {
                s = mid + 2;
            }
            else{
                e = mid;
            }
        }
        else{
            if (arr[mid - 1] == arr[mid])
            {
                s = mid + 1;
            }
            else{
                e = mid - 1;
            }
            
        }
        mid = s + (e-s)/2;
    }
    return -1;   

}
int main()
{ 

    vector<int> arr{3,3,7,7,10,11,11};
    int ans = solve(arr);
    cout << "Index is : " << ans << endl;
    cout << "Number is : " << arr[ans] << endl;
    
    return 0;
}