/**
 * The program checks whether a given number is prime or not using a function.
 * 
 * @param n The number to be checked if it is prime or not.
 */
// WAP to find number is prime or not using functions.

#include<iostream>
using namespace std;
int isPrime(int n)
{
    
    for (int i = 2; i < n; i++)
    {
        if (n%i==0)
        {
            cout << "Not Prime";
            break;
        }
        else
        {
            cout << "Prime";
            break;
        } 
    }

}
int main()
{

    int n;
    cout << "Enter Number : ";
    cin >> n;

    isPrime(n);
    
}