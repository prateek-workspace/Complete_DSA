// WAP to count 0 and 1 in Array. 

#include<iostream>
using namespace std;
int main()
{

    int arr[15]= {0,1,1,1,0,0,0,0,1,0,1,0,1,0,1};
    int numZero = 0;
    int numOne = 0;

    for (int i=0; i<15; i++)
    {
        if(arr[i] == 0)    
        {
            numZero++;
        }
        if(arr[i] == 1)
        {
            numOne++;
        }
    }
    
    cout << "Total 0's are : " << numZero << endl;
    cout << "Total 1's are : " << numOne << endl;

}