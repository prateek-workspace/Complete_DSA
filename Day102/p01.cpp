#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    int arr[10];
    arr[0] = 5;
    arr[1] = 6;
    arr[2] = 8;
    arr[6] = 16;
    cout << arr[0] << endl;
    cout << arr[1] << endl;
    cout << arr[2] << endl;
    // we can write arr[i] or i[arr] both are same 
    cout << 6[arr] << endl;
    cout << &arr << endl;
    cout << &arr << endl;
    cout << &arr[0] << endl;
    cout << &arr[1] << endl;
    cout << &arr[2] << endl;
    cout << endl;
    
    int *p = arr;
    cout << p << endl;
    cout << &p << endl;
    cout << *p << endl;
    cout << endl;

    cout << *arr << endl;
    cout << *(&arr) << endl;
    cout << *&arr[0] << endl;
    cout << *(&arr[0] + 1) << endl;
    cout << *(&arr[0] + 2) << endl;

    // if we try we can access any sub-part of array using poiters 

    p = p+2;

    cout << p << endl;

    return 0;
}