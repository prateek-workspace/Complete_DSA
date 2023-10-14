// WAP to print extremes in an array.  

#include<iostream>
using namespace std;
int main()
{

    int arr[9]={1,3,5,7,9,2,4,6,8};
    int size = 8;

    for (int i = 0; i < 9; i++)
    {
        int count = size - i;
        if (i<count)
        {
        cout << arr[i] << " ";
        cout << arr[count] << " "; 
        }
        else if (i == count)
        {
            cout << arr[i] << " ";
        }
        
        
    }

}