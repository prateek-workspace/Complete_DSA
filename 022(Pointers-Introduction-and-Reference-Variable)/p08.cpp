// Pointers with functions : ---
#include<bits/stdc++.h>
using namespace std;
void update(int* a, int* b){
    *a = 20;
    *b = 30;
}
int main()
{
    
    int arr[4] = {1,2,3,4};

    cout << "Before Updation" << endl;

    for (int i = 0; i < 4; i++)
    {
        cout << arr[i] << " ";
    }
    
    cout << endl << endl;

    int* ptr = &arr[1];
    int* qtr = &arr[2];
    
    update(ptr,qtr);
    
    cout << "After Updation" << endl;

    for (int i = 0; i < 4; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}  