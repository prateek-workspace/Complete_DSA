// Remove all occurences in a Sub String.
// LeetCode 1910.
#include<iostream>
#include<vector>
using namespace std;
string removeOccurence(string s, string part){
    int startIndex = s.find(part);
    while (startIndex!=string::npos)
    {
        s.erase(startIndex,part.length());
        startIndex = s.find(part);
    }

    return s;
    
}
int main()
{
    
    string s,part;
    cout << "Enter your string : " << endl;
    cin >> s;
    cout << "Enter the repeating part that you want to delete : " << endl;
    cin >> part;

    cout << "Remaining string is : " << removeOccurence(s,part) << endl;
    
    return 0;
}