// WAP to find union of two arrays.

#include<iostream>
#include<vector>
using namespace std;
int main()
{
   
    int firstArrSize;
    cout << "Enter the size of first array : ";
    cin >> firstArrSize;

    vector<int> firstArr(firstArrSize);
    cout << "Enter the elements : ";

    // taking elements as input 

    for (int i = 0; i < firstArr.size(); i++)
    {
        cin >> firstArr[i];
    }
   
    int secondArrSize;
    cout << "Enter the size of second array : ";
    cin >> secondArrSize;

    vector<int> secondArr(secondArrSize);
    cout << "Enter the elements : ";

    // taking elements as input 

    for (int i = 0; i < secondArr.size(); i++)
    {
        cin >> secondArr[i];
    }
     
     cout << endl;

    // finding which array has more elements.
    int n;
    if (firstArr.size()>secondArr.size())
    {
        n = firstArr.size();
    }
    else
    {
        n = secondArr.size();
    }

    // finding total index after union

    int finalIndex = firstArr.size() + secondArr.size();
  
    // pushing elements to new array after taking them from both arrays.
    vector<int> arrUnion;
    for (int i = 0; i < n; i++)
    {
        arrUnion.push_back(firstArr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        arrUnion.push_back(secondArr[i]);
    }

    // printing union of arrays.  
    for (int i = 0; i < finalIndex; i++)
    {
        cout << arrUnion[i]<< " ";
    }

    return 0;
}
