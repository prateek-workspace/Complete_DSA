// oddly occuring element.

// using hashmap. Time Complexity --> O(n), Space Complexity --> O(n)

#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int main()
{
    
    int arr[] = {1,1,2,2,3,3,4,5,4,6,5};
    int size = sizeof(arr)/sizeof(int);
    unordered_map<int,int> hash;
    
    for (int i = 0; i < size; i++)
    {
        hash[arr[i]]++;
    }
    
    for (int i = 0; i < size; i++)
    {
        if (hash[arr[i]]%2!=0)
        {
            cout << "Oddly occuring element is : " << arr[i] << endl;
            break;
        }
        
    }
    
    return 0;
}
