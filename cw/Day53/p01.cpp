
#include<iostream>
#include<vector>
using namespace std;
int findSqrt(int num){
    int target = num;
    int start = 0;
    int end = num;
    int mid = start + (end-start)/2;
    int ans;
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
            return mid;
        }
        
        mid = start + (end-start)/2;

    }
        return ans;
}
int main()
{
    int num;
    cout << "Enter no. you want square root of " << endl;
    cin >> num;

    int ans = findSqrt(num);
    
    cout << "sqrt is : " << ans << endl;

    return 0;
}