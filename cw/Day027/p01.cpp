// WAP to demonstrate 2-D Arrays. 

#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    int m;
    cout << "Enter no of rows : ";
    cin >> n;

    cout << "Enter no of columns : ";
    cin >> m;

    int arr[n][m];

    // taking values as input

    for (int i = 0; i < n; i++)
    {
        /* code */
        cout << "Entering values for " << i << " row" << endl;
        for (int j = 0; j < m; j++)
        {
        cout << "Enter values for " << j << " column" << endl;
        cin >> arr[i][j];
        }

    }

    // displaying output of 2D Array Row Wise.
    cout << "Row Wise Printing : " << endl;
    cout << "{";
    for (int i = 0; i < n; i++)
    {
        cout << "{";
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << ",";
        }
        cout << "},";
        
    }
    cout << "}" << endl;
    
    // displaying output of 2D Array Column Wise.
    cout << "Column Wise Printing : " << endl;
    cout << "{";
    for (int i = 0; i < n; i++)
    {
        cout << "{";
        for (int j = 0; j < m; j++)
        {
            cout << arr[j][i] << ",";
        }
        cout << "},";
        
    }
    cout << "}" << endl;
    
        
    return 0;
}