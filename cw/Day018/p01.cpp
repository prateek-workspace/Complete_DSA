// WAP to print all digits of an integer.

#include<iostream>
using namespace std;

int numDigits(int n)
{

    for (int i = 0; i <= n; i++)
    {
        /* code */
        int a = n%10;
        n = n /10;
        cout << a << " ";
    }
    

}

int main()
{

    cout << "Enter Number : ";
    int n;
    cin >> n;

    numDigits(n);
    
}