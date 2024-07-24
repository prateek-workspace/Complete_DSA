/*
 * The function aims to find pairs of elements in a vector that sum up to 9.
 
 * @return The program is returning the pairs of numbers from the vector `arr` whose sum is equal to 9.
 * If no such pair is found, it will output "Desired pair not present".
 */
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
            if (arr[i] + arr[j] == 9)
            {
                cout << "(" << arr[i] << "," << arr[j] << ")" << endl;
            }
            else
            {
                cout << "Desired pair not present" << endl;
                break;
            }  
        }
        
    }  
    return 0;
} 