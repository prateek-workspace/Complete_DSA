// WAP to find min number in an array.  

#include<iostream>
using namespace std;
int main()
{

    int arr[8]={0,3,5,7,-9,2,4,6};
    int min;
    min =  INT8_MAX;

    for (int i = 0; i < 8; i++)
    {
        if (arr[i]<min)
        {
            min = arr[i];
        }
        
    }
    
    cout << "Minimum number is : " << min << endl;

}