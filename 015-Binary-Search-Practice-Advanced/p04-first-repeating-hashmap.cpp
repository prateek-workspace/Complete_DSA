/**
 * The above C++ code finds the first repeating element in an array using two different methods: one
 * using an unordered map and the other using a brute force approach.
 * 
 * @return The main function is returning an integer value of 0.
 */

#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int main()
{
    
    int arr[] = {1,5,3,4,3,5,6};
    int size = sizeof(arr)/sizeof(int);
    unordered_map<int,int> hash;
    
    for (int i = 0; i < size; i++)
    {
        hash[arr[i]]++;
    }
    
    for (int i = 0; i < size; i++)
    {
        if (hash[arr[i]]>1)
        {
            cout << "First Repeating element is : " << arr[i] << endl;
            break;
        }
        
    }
    
    return 0;
}

    // Alternate Bruteforce method : 

// #include<iostream>
// #include<vector>
// using namespace std;
// int main()
// {
    
//     int arr[] = {1,5,3,4,3,5,6};
//     int size = sizeof(arr)/sizeof(int);
//     int i = 0;
//     bool notRepeated = true;
    
//     for (int i = 0; i < size; i++)
//     {
//         if (notRepeated)
//         {
//             for (int j = i+1; j < size; j++)
//             {
//                 if (arr[i]==arr[j])
//                 {
//                     cout << "First Repeating element is : " << arr[i] << endl;
//                     notRepeated = false; 
//                     break;
//                 }
                
//             }
//         }
   
//     }
    
//     return 0;
// }