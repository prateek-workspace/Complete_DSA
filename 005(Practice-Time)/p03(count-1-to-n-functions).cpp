// WAP to print counting from 1 to N using functions 

#include<iostream>
using namespace std;
void printNum(int n)
{
    for (int i = 1; i <= n; i++)
    {
        /* code */
        cout << i << endl;
    }
    
}
int main()
{

    int n;
    cout << "Enter number upto you want to print : " << endl;
    cin >> n;

    printNum(n); 
    
}