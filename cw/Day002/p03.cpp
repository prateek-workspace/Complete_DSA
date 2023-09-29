// WAP to check if-else-if condition.

#include<iostream>
using namespace std;

// nested if 

// int main()
// {

//     int marks;

//     cout << "Enter Marks : \n";
//     cin >> marks;

//     if (marks >= 90)
//     {
//         cout << "Grade : A \n";
//     }
//     else
//     {
//         if (marks >= 80)
//         {
//             cout << "Grade : B \n";
//         }

//         else
//         {
//             cout << "Grade : C \n";
//         }
        
//     }
// }

// else-if 

int main()
{

    int marks;

    cout << "Enter Marks : \n";
    cin >> marks;

    if (marks >= 90)
    {
        cout << "Grade : A \n";
    }
    else if (marks >= 80)
    {
        cout << "Grade : B \n";
    }
    else
    {
        cout << "Grade : C \n";
    }
        
}
