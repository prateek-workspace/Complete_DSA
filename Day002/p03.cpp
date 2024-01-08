// WAP to check if-else-if condition.


/* The code is checking the grade based on the marks entered by the user. It uses nested if statements
to check if the marks are greater than or equal to 90, and if so, it prints "Grade : A". If the
marks are not greater than or equal to 90, it checks if the marks are greater than or equal to 80,
and if so, it prints "Grade : B". If the marks are not greater than or equal to 80, it prints "Grade
: C". */

#include<iostream>
using namespace std;

// nested if 

/* The commented code is an alternative implementation of the same program. It uses nested if
statements to check the grade based on the marks entered by the user. The logic is the same as the
code below it, but it is structured differently. */

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

/**
 * This C++ program takes input for marks and assigns a grade based on the marks entered.
 */
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
