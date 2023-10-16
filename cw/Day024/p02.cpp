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


/* The code is finding the intersection of two arrays `firstArr` and `secondArr`. */
    vector<int> arrIntersecion;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (firstArr[i] == secondArr[j])
            {

                // marking element so that it doesnot gets repeated.
                //here you can give any number except INT_MIN

                secondArr[j] = INT8_MIN;

                arrIntersecion.push_back(firstArr[i]);
            }
            
        }
        
    }

    // printing intersection of arrays.  
/* The code `for (int i = 0; i < arrIntersecion.size(); i++)` is a loop that iterates over the elements
of the `arrIntersecion` vector. */
    for (int i = 0; i < arrIntersecion.size(); i++)
    {
        cout << arrIntersecion[i]<< " ";
    }

    return 0;
}
