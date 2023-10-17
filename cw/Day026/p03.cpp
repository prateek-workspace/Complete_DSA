// WAP sort 0's and 1's in arrays.
    // (Dutch National Flag Problem)
    // two solutions are her...first is of mine.

#include<iostream>
#include<vector>
using namespace std;
int main()
{
    // given array
    vector<int> arr{0,1,1,0,1,0,0,1,0,1,1,1,1,0,1};
    vector<int> brr;

    // pushing 0's

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == 0)
        {
            brr.push_back(arr[i]);
        } 
    }

    // pushing 1's

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == 1)
        {
            brr.push_back(arr[i]);
        } 
    }

    // printing the sorted array.

    cout << "[";
    for (int i = 0; i < arr.size(); i++)
    {
        cout << brr[i] << ",";
    }
    cout << "]";

    return 0;
}


// two pointer approach:----

// #include<iostream>
// #include<vector>
// using namespace std;
// int main()
// {
    
//     vector<int> arr{0,1,1,0,1,0,0,1,0,1,1,1,1,0,1};
    
//     int start = 0;
//     int i = 0;
//     int end = arr.size() - 1;

//     while (i!=end)
//     {
//         if (arr[i] == 0)
//         {
//             /* code */
//             swap(arr[start],arr[i]);
//             i++;
//             start++;
//         }

//         else
//         {
//             swap(arr[i],arr[end]);
//             end--;
//         }
        
//     }

//     for (auto value : arr)
//     {
//         cout << value << "," ;
//     }
    
    
    

//     return 0;
// }