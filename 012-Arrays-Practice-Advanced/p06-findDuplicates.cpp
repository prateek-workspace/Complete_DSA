/**
 * This C++ program takes input from the user to create an array, then checks if there are any
 * duplicate elements in the array.
 * 
 * @return The main function returns an integer value of 0.
 */

#include<iostream>
#include<vector>
using namespace std;
int main()
{
    
    int n;
    cout << "Enter size of array : " << endl;
    cin >> n;

    vector<int> arr(n);
    vector<int> brr;

    // taking input of elements 

    for (int i = 0; i < n; i++)
    {
        cout << "Enter value for " << i << " index" << endl;
        cin >> arr[i];
    }
 
    // printing the array 
    for (int i = 0; i < arr.size(); i++)
    {

        cout << arr[i] << "," ;       

    }
    cout << endl;

    int a,flag = 0;
    // finding duplicate in the array 
    for (int i = 0; i < arr.size(); i++)
    {

        a = arr[i];
        bool isXor = 0;
        for (int j = 0; j < arr.size(); j++)
        {
            isXor = a^arr[j];
            if (isXor==0)
            {
                brr.push_back(arr[j]);
                flag++;
            }
            
        }
    
    }

    if (flag==arr.size())
    {
        cout << "No Duplicates Present";
    }
    else
    {
        cout << "Duplicates Present at : ";
        for (int i = 0; i < brr.size(); i++)
        {
            cout << brr[i];
        }  
    }


    


    
    return 0;
}