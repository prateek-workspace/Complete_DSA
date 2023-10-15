// WAP to find intersection of two arrays.

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


    vector<int> arrIntersecion;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (firstArr[i] == secondArr[j])
            {

                // marking element so that it doesnot gets repeated.
                //here you can give any number except 1 & 0

                secondArr[j] = -1;

                arrIntersecion.push_back(firstArr[i]);
            }
            
        }
        
    }

    // printing intersection of arrays.  
    for (int i = 0; i < arrIntersecion.size(); i++)
    {
        cout << arrIntersecion[i]<< " ";
    }

    return 0;
}
