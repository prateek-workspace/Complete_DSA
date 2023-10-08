// WAP to find factorial using functions.

#include<iostream>
using namespace std;
int fact(int n)
{
    
    int temp = 1;
    for (int i = 1; i <= n; i++)
    {
        temp = temp * i;
    }
    cout << "Factorial is : "<< temp;
    
}
int main()
{

    int n;
    cout << "Enter Number : ";
    cin >> n;

    fact(n);
    
}