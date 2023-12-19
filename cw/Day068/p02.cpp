
#include<iostream>
#include<string.h>
#include<vector>
using namespace std;
int main()
{
    char ch[100];

    cout << "Enter your name : " << endl;
    cin.getline(ch,50);

    cout << "Original array is : " << ch << endl;

    int s = 0;
    int size = strlen(ch);

// we have to use size-1 because in a char array ,array's ending index should be at size-1;

    int e = size - 1;;

    cout <<"Size of Array is : " << e << endl;

    for (int i = 0; i < size; i++)
    {
        if (ch[i]==' ')
        {
            ch[i]='@';
        }
        
    }
    
    

    cout << "Modified array is : " << ch << endl;
    
    return 0;
}