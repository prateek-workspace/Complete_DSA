// WAP to reverse an array.  

#include<iostream>
using namespace std;
int main()
{

    int arr[8]={1,3,5,7,9,2,4,6};
    int size = 7;

    for (int i = 0; i < 8; i++)
    {
        int count = size - i;
        arr[i] = arr[count];
    }

    for (int i = 0; i < 8; i++)
    {
        cout << arr[i] << " ";
    }


}