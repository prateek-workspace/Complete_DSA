// WAP for pair sum.

#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> arr{1,2,3,4,5,6,7,8,9};

    // pair sum = 9

    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i+1; j < arr.size(); j++)
        {
            if (arr[i] + arr[j] == 111)
            {
                cout << "(" << arr[i] << "," << arr[j] << ")" << endl;
            }
            // else
            // {
            //     cout << "Desired pair not present" << endl;
            //     break;
            // }  
        }
        
    }  
    return 0;
} 