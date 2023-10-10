// WAP to convert celcius to fahrenheit.

#include<iostream>
using namespace std;
float ctof(float temp)
{
    float f = (9*temp/(5))+32;
    return f;
}
int main()
{

    cout << "Enter Temperature in Celcius : ";
    float temp;
    cin >> temp;

    cout << ctof(temp);
    
}