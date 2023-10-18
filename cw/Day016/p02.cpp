/**
 * The program prompts the user to enter a number and then prints "Namaste Duniya" that many times.
 */
// WAP to demonstrate functions. 

#include<iostream>
using namespace std;

void PrintName()
{

    int n;
    cout << "Enter number of times you want to print : ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        /* code */
        cout << "Namaste Duniya" << endl;
    }
    

}

int main()
{

    PrintName();
    
}