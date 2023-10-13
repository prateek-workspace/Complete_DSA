// WAP to find max number in an array.  

#include<iostream>
using namespace std;
int main()
{

    int arr[8]={1,3,5,7,9,2,4,6};
    int max;
    max =  INT8_MIN;

    for (int i = 0; i < 8; i++)
    {
        if (arr[i]>max)
        {
            max = arr[i];
        }
        
    }
    
    cout << "Maximum number is : " << max << endl;

}