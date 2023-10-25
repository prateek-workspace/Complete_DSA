/**
 * The above code is a C++ program that finds and prints all prime numbers within a given range.
 * 
 * @param n The variable `n` represents the maximum range up to which you want to find prime numbers.
 */

#include<iostream>
#include<vector>
using namespace std;
void isPrime(int n)
{
    int flag = 0;

    for (int i = 2; i < n; i++)
    {
        if (n%i==0)
        {
            flag++;
        }
        
    }
    
    if (flag == 0)
    {
        cout << n << endl;
    }

}
int main()
{   
    int n;
    cout << "Enter max range : " << endl;
    cin >> n;
    cout << "Prime Numbers in given range are : " << endl;
    for (int i = 1; i <= n; i++)
    {
        isPrime(i);
    }
    
    
    return 0;
}