// WAP to  
/**
 * The code initializes an integer variable 'a' with the value -1, and then prints the value of 'a'
 * followed by the sum of 'a' and the post-incremented value of 'a'.
 */

#include<iostream>
using namespace std;
int main()
{

    int a = -1;
    // bool b;

    // int b = ((a) && (++a) && (a++) && (++a));

    

    cout << a++;
    cout << endl;
    cout << a + (a++);
    
}