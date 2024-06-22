// WAP to add two numbers using functions.

#include<iostream>
using namespace std;

int addTwoNum(int a, int b)
{
    int c = a + b;
    return c;
}

int main()
{

    int a ,b;
    cout << "Enter first value : "<< endl;
    cin >> a; 
    cout << "Enter second value : "<< endl;
    cin >> b;

    cout << addTwoNum(a,b) <<endl;
    cout << &a;
    
}