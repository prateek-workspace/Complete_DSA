// WAP to comvert miles to km.

#include<iostream>
using namespace std;

float milesToKm(float n)
{
    float km = 1.6*n;
    return (km);
}

int main()
{
    cout << "Enter Distance in Miles : ";
    int n;
    cin >> n;

    cout << milesToKm(n);
        
}