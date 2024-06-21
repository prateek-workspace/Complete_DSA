
#include<bits/stdc++.h>
using namespace std;

void revNum(int n){
    // base case 
    if(n==0){
        return;
    }
    // processing part 
    cout << n << " ";
    // recursive calls/relation 
    revNum(n-1);
}

int main()
{
    int n;
    cout << "Enter Number : " << endl;
    cin >> n;
    revNum(n);
    
    return 0;
}