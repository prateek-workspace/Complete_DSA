/**
 * The above code is a C++ program that calculates the square root of a given number using the binary
 * search algorithm.
 * 
 * @param num The variable `num` is the number for which you want to find the square root.
 * 
 * @return The function findSqrt() returns the square root of the input number.
 */


#include<iostream>
#include<vector>
using namespace std;
float findSqrt(float num){
    float target = num;
    int start = 0;
    int end = num;
    int mid = start + (end-start)/2;
    float ans;
    while (start<=end)
    {
        if (mid*mid>target)
        {
            end = mid - 1;
        }
        if (mid*mid<target)
        {
            ans = mid;
            start = mid + 1;
        }
        if (mid*mid==target)
        {
            ans = mid;
        }
        
        mid = start + (end-start)/2;

    }
        // return ans;

    // finding 0.1 position
    float newAns;
    float ans2;
    float i = 0.1;
    while (i<1.0)
    {
        newAns = ans+i;
        if (newAns*newAns<target)
        {
            ans2 = newAns;
        } 
        if (newAns*newAns>target)
        {
            break;
        }      
        i = i + 0.1;
    }
    // return ans2;
    
    // finding 0.01 position
    float newAns2;
    float ans3;
    float j = 0.01;
    while (j<0.10)
    {
        newAns2 = ans2+j;
        if (newAns2*newAns2<target)
        {
            ans3 = newAns2;
        } 
        if (newAns2*newAns2>target)
        {
            break;
        }      
        j = j + 0.01;
    }
    return ans3;

}
int main()
{
    float num;
    cout << "Enter no. you want square root of " << endl;
    cin >> num;

    float ans = findSqrt(num);
    
    cout << "sqrt is : " << ans << endl;

    return 0;
}