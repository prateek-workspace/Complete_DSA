// WAP to find max of 3 numbers using functions. 

#include<iostream>
using namespace std;
void maximum(int a,int b,int c)
{
    if (a>b && a>c)
    {
        /* code */
        cout << a << " is Greatest";
    }
    else if (b>c && b>a)
    {
        /* code */
        cout << b << " is Greatest";
    }
    else
    {
        cout << c << " is Greatest";
    }
    
}
int main()
{

    int a,b,c;
    cout << "Enter first number : " << endl;
    cin >> a;

    cout << "Enter second number : " << endl;
    cin >> b;

    cout << "Enter third number : " << endl;
    cin >> c;

    maximum(a,b,c);

}