// WAP to find number is odd or even using functions.

#include<iostream>
using namespace std;
int oddEven(int n)
{
    if (n%2 == 0)
    {
        cout << "Even Number !!";
    }
    else
    {
        cout << "Odd Number !!";
    }
    
}
int main()
{

    int n;
    cout << "Enter Number : ";
    cin >> n;

    oddEven(n);
    
}