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