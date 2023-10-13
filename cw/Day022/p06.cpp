// WAP to count 0 and 1 in Array. 

#include<iostream>
using namespace std;
int main()
{

    int arr[]= {0,1,1,1,0,0,0,0,1,0,1,0,1,0,1};
    int a,b = 0;

    for (int i = 0; i < 15; i++)
    {
        if (arr[i] == 1)    
        {
            a++;
        }
        else if(arr[i] == 0)
        {
            b++;
        }
    
    }
    
    cout << "Total 0's are : " << b << endl;
    cout << "Total 1's are : " << a << endl;

}