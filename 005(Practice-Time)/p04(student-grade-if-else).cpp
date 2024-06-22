// WAP for students and grade system.

#include<iostream>
using namespace std;

void gradeValue(int grade)
{
    if (grade >= 90)
    {
        /* code */
        cout << "A Grade";    
    }
    else if (grade >= 80)
    {
        /* code */
        cout << "B Grade";    
    }
    else if (grade >= 70)
    {
        /* code */
        cout << "C Grade";    
    }
    else if (grade >= 60)
    {
        /* code */
        cout << "D Grade";
    }   
    else
    {
        cout << "Fail";
    }
    
}

int main()
{

    int marks;
    cout << "Enter Grades here : " << endl;
    cin >> marks;

    gradeValue(marks);
    
}