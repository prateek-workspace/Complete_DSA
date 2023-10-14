// WAP to demonstrate vectors. 

#include<iostream>
#include <vector>
using namespace std;
int main()
{
    // first way 
    vector<int> arr;

    arr.push_back(5);
    arr.push_back(9);
    // arr.pop_back();
    cout << arr.size() << endl;
    cout << arr.capacity() << endl;

    // printing 

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << endl;
    }

    // second way 

    int n;
    cout << "Enter the size of vector you want : ";
    cin >> n;

    vector<int> mine(n,6);
    cout << "Is mine empty or not : " << mine.empty() << endl;
    cout << "Size of mine is : " << mine.size() << endl;

        // printing 

    for (int i = 0; i < mine.size(); i++)
    {
        cout << mine[i] << endl;
    } 

    // third way (less use)

    vector<int> brr{10,20,30,40,50};
    cout << "Size of brr is : " << brr.size() << endl;

        // printing 

    for (int i = 0; i < brr.size(); i++)
    {
        cout << brr[i] << endl;
    } 
    
    
}