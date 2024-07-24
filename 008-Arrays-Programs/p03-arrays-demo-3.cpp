// WAP for taking elements as input and then printing their doubles.

#include<iostream>
using namespace std;
int main()
{

    
    int arr[6];

    // taking elements as input 
    
    cout << "Taking Elemnts as Input : " << endl;

    for (int i = 0; i < 6; i++)
    {
        cin >> arr[i];
    }
    
    // printing values/elements.

    cout << "Printing Double of Elements : " << endl; 

    for (int i = 0; i < 6; i++)
    {
        cout << 2*arr[i] << endl;
    }
    

    
}