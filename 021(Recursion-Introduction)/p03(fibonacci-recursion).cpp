
#include<bits/stdc++.h>
using namespace std;

int fib(int n){
    if(n==0 || n==1){
        return n;
    }
    return fib(n-1) + fib(n-2);
}

int main()
{
    
    int n;
    cout << "Enter the term that you want to know : " << endl;
    cin >> n;
    cout << "Desired term's value is : " << fib(n) << endl;
    
    return 0;
}