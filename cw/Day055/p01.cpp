// division of two numbers
#include<iostream>
#include<vector>
using namespace std;
int division(int divisor, int dividend )
{

    int start = 0;
    int end = dividend;
    int mid = start + (end - start)/2;
    int ans;

    while (start <= end)
    {
        if (mid*divisor==dividend)
        {   
            ans = mid;
            end = mid -1;
        }
        else if (mid*divisor>dividend)
        {
            end = mid - 1;
        }
        else if (mid*divisor<dividend)
        {
            start = mid + 1;
            ans = mid;
        }  

        mid = start + ((end-start)/2); 

    }
    return ans;
}
int main()
{
    int divisor,dividend;
    cout << "Enter the Dividend : " << endl;
    cin >> dividend;
    cout << "Enter the Divisor : " << endl;
    cin >> divisor;
    int ans = division(divisor,dividend);
    cout << "Answer is : " << ans << endl;

    return 0;
}