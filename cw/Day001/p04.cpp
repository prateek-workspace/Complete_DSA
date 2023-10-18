// WAP to perform all Arithemetic Operations.
/**
 * This C++ program takes two numbers as input and performs addition, subtraction, division,
 * multiplication, and modulus operations on them.
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

    cout << "Addition is : " << a + b << endl;
    cout << "Substraction is : " << a - b << endl;
    cout << "Division is : " << a / b << endl;
    cout << "Multiplication is : " << a * b << endl;
    cout << "Modulus is : " << a % b << endl;
    
}