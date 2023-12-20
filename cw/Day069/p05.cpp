
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
        if (ch[i]>='A' && ch[i] <= 'Z')
        {
            ch[i] = ch[i] - 'A' + 'a';
        }
         
    }  
    cout << "String in Lower Case is : " << ch << endl;
    return 0;
}