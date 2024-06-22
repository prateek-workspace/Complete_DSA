// WAP to reverse an array.  

// #include<iostream>
// using namespace std;
// int main()
// {

//     int arr[9]={1,3,5,7,9,2,4,6,8};
//     int size = 8;

//     for (int i = 0; i < 9; i++)
//     {
//         int count = size - i;
//         int b = arr[count];
//         // cout << b << " ";
//         int brr[9];
//         brr[i] = b;
//         cout << brr[i] << " ";
//     }

// }

// Alternate Method 

// #include<iostream>
// using namespace std;
// int main()
// {

//     int arr[9]={1,3,5,7,9,2,4,6,8};
//     int size = 9;
//     int start = 0;
//     int end = size - 1;
//     while(start<=end)
//     {
//         swap(arr[start],arr[end]); 
//         start++;
//         end--;
//     }

//     for (int i = 0; i < 9; i++)
//     {
//         cout << arr[i] << " ";
//     }

// }

#include<iostream>
using namespace std;
int main()
{
    int arr[9]={1,3,5,7,9,2,4,6,8};
    int size = 9;
    int start = 0;
    int end = size - 1;
    while(start<=end)
    {
        // swap(arr[start],arr[end]); 
        // start++;
        // end--;

        arr[end] =  arr[end] - arr[start];
        arr[start] = arr[start] + arr[end];
        arr[end] = arr[start] - arr[end];

    }

    for (int i = 0; i < 9; i++)
    {
        cout << arr[i] << " ";
    }
}