/**
 * The above code is an implementation of the Sieve of Eratosthenes algorithm to find all prime numbers
 * up to a given number.
 * 
 * @param n The parameter `n` in the `Sieve` function represents the upper limit of the range for which
 * you want to generate the sieve array. In this case, it is set to 250.
 * 
 * @return The function Sieve is returning a vector of boolean values.
 */

#include<bits/stdc++.h>
using namespace std;

vector<bool> Sieve(int n){
    // creating sieve array of n size and telling is Prime

    vector<bool>sieve(n+1, true);
    sieve[0] = sieve[1]=false;

// Optimisation : 2 :---

// since inner loop start from i*i;
// but if we se if are checking primes till 17 then we see if in inner loop starting if we do  j = i*i for i = 5, then it becomes 25 and makes condition false and results exiting the loop.

// So we clearly see that if we loop outer till sqrt(n) then inner loop will never go false as during inner loop in last case , i is always <= sqrt(n) so if it gets squared i.e. j=i*i in inner loop its max value came out to be is equal to n

    // for (int i = 2; i <= n; i++)
    for (int i = 2; i <= sqrt(n); i++)
    {
        if(sieve[i] == true){

// Optimisation : 1:---

// initially we do j = i*2 and it starts marking multiples of primes marked numbers as false but we can optimise this as 

// 2 = 4,6,8,10,12,14,16,.....
// 3 = 6,9,12,15,18,21,...
// 5 = 10,15,20,25,...
// 7 = 14,21,28,...

// but we see 6, 12, 18 etc that are present in 3 are also in 2, similarily 10, 20 in 5 are also in 2, and 14,28, etc are present in 2,3 as well as in 7 so we can get rid off them if we start by  j = i * i; 

// because if we do j=i*2; then we are marking already marked one's again and that's unecessary

            // int j = i*2;
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
    
    vector<bool> sieve = Sieve(250);

    for (int i = 0; i <= 250; i++)
    {
        if(sieve[i]){
            cout << i << " ";
        }
    }
    
    return 0;
}