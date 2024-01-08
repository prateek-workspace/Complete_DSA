// WAP to check if condition.
/**
 * This C++ program takes a user input for a score and prints "India Wins" if the score is less than
 * 300, otherwise it prints "Pakistan Wins".
 */

#include<iostream>
using namespace std;

int main()
{

    int score;

    cout << "Enter Score : \n";
    cin >> score;

    if (score < 300)
    {
        cout << "India Wins \n";
    }

    cout << "Pakistan Wins \n";

}