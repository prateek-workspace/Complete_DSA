/**
 * This C++ program takes input of three arrays, prints them, and then searches for common elements
 * among them.
 * 
 * @return The main function is returning an integer value of 0.
 */

#include<iostream>
#include<vector>
using namespace std;
int main()
{
    
    int arrLen;
    cout << "Enter size of first array : " << endl;
    cin >> arrLen;

    vector<int> arr(arrLen);

    int brrLen;
    cout << "Enter size of second array : " << endl;
    cin >> brrLen;

    vector<int> brr(brrLen);

    int crrLen;
    cout << "Enter size of third array : " << endl;
    cin >> crrLen;

    vector<int> crr(crrLen);

    // taking input of elements 

    cout << "Enter Values for First Array : " << endl;

    for (int i = 0; i < arrLen; i++)
    {
        cout << "Enter value for " << i << " index" << endl;
        cin >> arr[i];
    }

    cout << "Enter Values for Second Array : " << endl;

    for (int i = 0; i < brrLen; i++)
    {
        cout << "Enter value for " << i << " index" << endl;
        cin >> brr[i];
    }

    cout << "Enter Values for Third Array : " << endl;

    for (int i = 0; i < crrLen; i++)
    {
        cout << "Enter value for " << i << " index" << endl;
        cin >> crr[i];
    }
 
    // printing the array 

    cout << "Printing First Array : " << endl;

    for (int i = 0; i < arr.size(); i++)
    {

        cout << arr[i] << "," ;       

    }
    cout << endl;

    cout << "Printing Second Array : " << endl;

    for (int i = 0; i < brr.size(); i++)
    {

        cout << brr[i] << "," ;       

    }
    cout << endl;

    cout << "Printing Third Array : " << endl;

    for (int i = 0; i < crr.size(); i++)
    {

        cout << crr[i] << "," ;       

    }
    cout << endl;
    
    // searching for element

    int a;

    for (int i = 0; i < arr.size(); i++)
    {

        a = arr[i];
        for (int j = 0; j < brr.size(); j++)
        {
            if (a==brr[j])
            {
                for (int m = 0; m < crr.size(); m++)
                {
                    if (a==crr[m])
                    {
                        cout << "Common Number is : " << a << endl;
                    }
                    
                }
                
            }
            
        }
               

    }


    return 0;
}