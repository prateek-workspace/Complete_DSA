
#include<bits/stdc++.h>
using namespace std;

vector<bool> Sieve(int n){
    // creating sieve array of n size and telling is Prime

    vector<bool>sieve(n+1, true);
    sieve[0] = sieve[1]=false;

    for (int i = 2; i <= n; i++)
    {
        if(sieve[i] == true){
            int j = i*i;
            while(j<=n){
                sieve[j] = false;
                j += i;
            }
        }
    }
    return sieve;
}

int main()
{
    
    vector<bool> sieve = Sieve(25000);

    for (int i = 0; i <= 25000; i++)
    {
        if(sieve[i]){
            cout << i << " ";
        }
    }
    
    return 0;
}