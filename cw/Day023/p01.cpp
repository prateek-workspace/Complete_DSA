// WAP to demonstrate vectors. 

#include<iostream>
#include <vector>
using namespace std;
int main()
{

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

    vector<int> mine(10,6);
    cout << "Size of mine is : " << mine.size() << endl;

        // printing 

    for (int i = 0; i < mine.size(); i++)
    {
        cout << mine[i] << endl;
    } 
    
    
}