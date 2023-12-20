
#include<iostream>
#include<string.h>
#include<vector>
using namespace std;
int main()
{

    char ch[100];
    cout << "Enter your string : " << endl;
    cin.getline(ch,100);
    int size = strlen(ch);
    cout << "Original String is : " << ch << endl;
    for (int i = 0; i < size; i++)
    {   
        if (ch[i]>='a' && ch[i] <= 'z')
        {
            ch[i] = ch[i] -'a' + 'A';
        }
    }  
    cout << "String in Upper Case is : " << ch << endl;
    return 0;
}