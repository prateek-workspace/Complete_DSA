
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
        if (str[i]==ans[ans.length()-1])
        {
            ans.pop_back();
        }
        ans.push_back(temp);
        
    }
    
    cout << "Answer is : " << ans << endl;

    
    return 0;
}