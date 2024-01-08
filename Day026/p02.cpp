// WAP for four sum.

#include<iostream>
#include<vector>
using namespace std;
int main()
{
    
    vector<int> arr{1,2,3,4,5,6,7,8,9};
    int sum = 11;
    // first element traversal
    for (int m = 0; m < arr.size(); m++)
    {

        // second element traversal

        for (int n = m+1; n < arr.size(); n++)
        {

        // third element traversal

            for (int o = n+1; o < arr.size(); o++)
            {
                
            // fourth element traversal

                for (int p = o+1; p < arr.size(); p++)
                {
            // checking condition
                    if (arr[m] + arr[n] + arr[o] + arr[p] == sum)
                    {
                        // printing it
                        cout << "(" << arr[m] << "," << arr[n] << "," << arr[o] << "," << arr[p] << ")" << endl; 
                    }
                    
                }
                
            }
            
        }
        
    }
    return 0;
}