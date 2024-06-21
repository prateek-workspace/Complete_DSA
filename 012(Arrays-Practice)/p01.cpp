// WAP for triplet sum in arrays.

#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> arr{1,2,3,4,5,6};
    // triplet sum = 8

    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i+1; j < arr.size(); j++)
        {
            for (int n = j+1; n < arr.size(); n++)
            {
                if (arr[i]+ arr[j] + arr[n] == 3)
                {
                    cout << "(" << arr[i] << "," << arr[j] << "," << arr[n] << ")" << endl;
                }
                
            }
            
        }
        
    }  
    return 0;
}