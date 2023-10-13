// WAP to print extremes in an array.  

#include<iostream>
using namespace std;
int main()
{

    int arr[8]={1,3,5,7,9,2,4,6};
    int size = 7;

    for (int i = 0; i < 8; i++)
    {
        int count = size - i;
        if (i<count)
        {
        cout << arr[i] << " ";
        cout << arr[count] << " "; 
        }
        
        
    }

}