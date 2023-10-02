// WAP to  

#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin >> a;
    cin >> b; 
    cin >> c;

    if (a+b>c && b+c>a &&  a+c>b)
    {
        /* code */
        cout << "Valid traingle";
    }
    else
    {
        cout << "Invalid traingle";
    }

}