/**
 * The code implements division of two numbers using binary search with precision.
 * 
 * @param divisor The divisor is the number that you want to divide the dividend by.
 * @param dividend The dividend is the number that is being divided.
 */
// division of two numbers using binary search with precision.
#include<iostream>
#include<vector>
using namespace std;
float division(int divisor, int dividend )
{

    int start = 0;
    int end = dividend;
    int mid = start + (end - start)/2;
    float ans;

    while (start <= end)
    {
        if (abs(mid*divisor)==abs(dividend))
        {   
            ans = mid;
            end = mid -1;
        }
        else if (abs(mid*divisor)>abs(dividend))
        {
            end = mid - 1;
        }
        else if (abs(mid*divisor)<abs(dividend))
        {
            start = mid + 1;
            ans = mid;
        }  

        mid = start + ((end-start)/2); 

    }
    // return ans;

    
    float finalAns = ans;
    int precision;
    cout << "Enter no of decimals upto which you want precision : ";
    cin >> precision;

    float step = 0.1;
    for (float i = 0; i < precision; i++)
    {
        for (float j = 0; divisor*j <= dividend; j = j+step)
        {
            finalAns = j;
        }

        step = step/10;
    }

    if (divisor>0 && dividend>0 || divisor<0 && dividend<0)
    {
        finalAns = finalAns*1;
    }
    else{
        finalAns = finalAns*-1;
    }
    
    cout << "Answer is : " << finalAns << endl;

}
int main()
{
    float divisor,dividend;
    cout << "Enter the Dividend : " << endl;
    cin >> dividend;
    cout << "Enter the Divisor : " << endl;
    cin >> divisor;
    division(divisor,dividend);


    return 0;
}