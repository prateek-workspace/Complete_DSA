/**
 * This C++ program demonstrates the use of vectors to create and manipulate a 2D array.
 * 
 * @return The main function is returning an integer value of 0.
 */

#include<iostream>
#include<vector>
using namespace std;
int main()
{
    // declaration with size and also declaration by a particular value -8.

    vector< vector<int> > arr(5, vector<int> (5,-8));

    // noraml declaration 

    vector< vector<int> > mainArr;

    // creating subsidiary vector arrays 
    
    vector<int> a{1,2,3};
    vector<int> b{2,4,6};
    vector<int> c{1,3,7};

    // pushing these vectors to mainArr so that we create a 2D array 

    mainArr.push_back(a);
    mainArr.push_back(b);
    mainArr.push_back(c);

    // printing the mainArr

    for (int i = 0; i < mainArr.size(); i++)
    {
        for (int j = 0; j < mainArr[i].size(); j++)
        {
            cout << mainArr[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;

    // printing arr 

    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[i].size(); j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;
    
    // print value at row = 2 and col = 3 in arr 

    cout << arr[2][3] << endl;

    // take input a value at row = 2 and col = 3.

    cout << "Enter value at row = 2 and col = 3 " << endl;

    cin >> arr[2][3];

    // printing the taken value 

    cout << "Value is : " << arr[2][3] << endl;

    return 0;
}