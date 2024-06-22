/**
 * This C++ program calculates the factorial of a given number using a vector to store the digits of
 * the factorial.
 * 
 * @return The program is returning 0, which indicates that the program executed successfully.
 */
// Factorial of a larger number.


#include<algorithm>
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    
    int num;
    cout << "Enter Number : " << endl;
    cin >> num;

    vector<int> ans;
    ans.push_back(1);

    int carry = 0;

    for (int i = 2; i <= num; i++)
    {
        for (int j = 0; j < ans.size(); j++)
        {
            int temp =  ans[j]*i+carry;
            ans[j] = (temp) % 10;
            carry = temp / 10;
        }

        while(carry)
        {
            ans.push_back(carry%10);
            carry = carry / 10;
        }
        // carry = 0;

    }

    reverse(ans.begin(), ans.end());

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i];
    }
    
    
    return 0;
}