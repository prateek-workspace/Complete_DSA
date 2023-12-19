
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

    cout << e << endl;

    while (s<e)
    {
        swap(ch[e],ch[s]);
        s++;
        e--;
    }
    

    cout << "Reversed array is : " << ch << endl;
    
    return 0;
}