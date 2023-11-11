
#include<iostream>
#include<vector>
using namespace std;
int firstOccurrence(vector<int> arr, int num )
{

    int start, end, mid, index;
    start = 0;
    end = arr.size() - 1;

    mid = start + ((end-start)/2);

    while (start >= end)
    {
        if (arr[mid] > num)
        {
            end = mid - 1;
            
        }
        else if (arr[mid] < num)
        {
            start = mid + 1;
        }
        else if (arr[mid] == num)
        {
            end = mid -1;
        }
    }   

}
int main()
{

    int num, size;    
    vector<int> arr{1,3,4,5,6,6,6,7,8,9,9,9,9,9,9,9};
    size = arr.size();
    cout << "Enter the number that you want to search : " << endl;
    cin >> num;
    firstOccurrence(arr, num);
    
    return 0;
}