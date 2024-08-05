// Time complexity : --->  O(n)
// Space complexity : ---> O(n)

#include<bits/stdc++.h>
using namespace std;

/**
 * The function `swapstr` recursively swaps characters in a string between the specified start and end
 * indices.
 * 
 * @param str The `str` parameter is a reference to a string that you want to perform swapping on.
 * @param start The `start` parameter in the `swapstr` function represents the starting index of the
 * substring within the `str` string that you want to swap characters in.
 * @param end The `end` parameter in the `swapstr` function represents the index of the last character
 * in the string `str` that you want to swap with the character at the `start` index.
 * 
 * @return The function `swapstr` is returning `void`, which means it does not return any value.
 */

void swapstr(string& str, int start, int end){

    // base case :--

    if(start>=end){
        return;
    }

    // solving first case :--
    swap(str[start],str[end]);

    swapstr(str, start+1, end-1);
    
}

int main()
{

    string str = "master";

    int start = 0;
    int end = str.size()-1;

    swapstr(str,start,end);

    cout << "swapped string is :" << str << endl;

    return 0;

}