/**
 * The missingNum function takes an array of integers and its size as input, and prints the missing
 * numbers in the range 1 to n.
 * 
 * @param a The array `a` contains the numbers from which we need to find the missing numbers.
 * @param n The variable `n` represents the size of the array `a`. In the given code, `n` is calculated
 * as the size of the array `a` divided by the size of an integer (`sizeof(int)`).
 */

// Method 1:---


#include<iostream>
#include<vector>
using namespace std;
void missingNum(int *a,int n)
{

    for (int i = 0; i < n; i++)
    {
        int index = abs(a[i]);
        if (a[index-1]>0)
        {
            a[index-1] *= -1;
        }
        
    }
    
    // printing missing numbers

    for (int i = 0; i < n; i++)
    {
        if (a[i]>0)
        {
            cout << i+1 << " ";
        }
        
    }
    

}
int main()
{
    int a[] = {1,3,4,5,3};
    int n = sizeof(a)/sizeof(int);
    cout << n << endl;
    missingNum(a,n);    
    
    return 0;
}


// Method-2:---

// Alternate Way by Sorting 


// #include<iostream>
// #include<vector>
// using namespace std;
// void missingNum(int *a,int n)
// {
//     int i = 0;
//     while (i<n)
//     {
//         int index = a[i] - 1;
//        if (a[i]!= a[index])
//        {
//             swap(a[i],a[index]);
//        }
//        else{
//         ++i;
//        }
        
//     }
    
    
//     // printing missing numbers

//     for (int i = 0; i < n; i++)
//     {
//         if (a[i]!=i+1)
//         {
//             cout << i+1 << " ";
//         }
        
//     }
    

// }
// int main()
// {
//     int a[] = {1,3,4,5,3};
//     int n = sizeof(a)/sizeof(int);
//     missingNum(a,n);    
    
//     return 0;
// }