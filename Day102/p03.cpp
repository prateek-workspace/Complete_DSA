// Pointers with functions : ---


#include<bits/stdc++.h>
using namespace std;
void solve(int arr[]){
    cout << "Size in functions is : " << sizeof(arr) << endl;
    cout << "We are in Solve function" << endl;

    cout << arr << endl;
    cout << &arr << endl;

    arr[4] = 50;

    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl << endl;
}
int main()
{
    
    int arr[10] = {1,2,3,4,5,6,7,8,9,0};
    cout << "Size in main is : " << sizeof(arr) << endl;
    cout << "We are in main" << endl;

    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl << endl;

    cout << arr << endl;
    cout << &arr << endl;
    
    cout << "Calling solve function " << endl;

    solve(arr);
    
    cout << "We are again in main" << endl;

    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl << endl; 

    return 0;
}  