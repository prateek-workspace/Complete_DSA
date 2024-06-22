// WAP to perform all Relational Operations.

/**
 * This C++ program takes two numbers as input and compares them using relational operators, then
 * prints the results.
 */
#include<iostream>
using namespace std;

int main()
{

    int a;
    int b;

    cout << "Enter First number : \n";
    cin >> a;

    cout << "Enter Second number : \n";
    cin >> b;

    cout << "Results are : " << endl;

    cout << (a<b) << endl;    
    cout << (a<=b) << endl;    
    cout << (a>b) << endl;    
    cout << (a>=b) << endl;    

}