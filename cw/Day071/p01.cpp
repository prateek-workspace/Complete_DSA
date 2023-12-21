/**
 * The above C++ code takes a string as input and removes adjacent duplicate characters from it.
 * 
 * @return The code is returning 0, which indicates successful execution of the program.
 */
// Leetcode 1047
#include<string.h>
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    
    string str,ans;
    cout << "Enter your String : " << endl;
    getline(cin,str);
    int size = str.length();
    for (int i = 0; i < size; i++)
    {
        char temp = str[i];
        if (str[i]==ans[ans.length()-1] && ans.length()-1>=0)
        {
            ans.pop_back();
        }
        ans.push_back(temp);
        
    }
    
    cout << "Answer is : " << ans << endl;

    
    return 0;
}