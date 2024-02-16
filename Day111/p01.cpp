//  Factorial Using Recursion 
#include<bits/stdc++.h>
using namespace std;
int fact(int n){
    if(n==1 || n==0){
        return 1;
    }
    return n * fact(n-1);
}
int main()
{ 
    int n;
    cout << "Enter Number : " << endl;
    cin >> n;
    cout << "Factorial of n is :" << fact(n) << endl;
    
    return 0;
}