// WAP to check if-else condition.
/**
 * This C++ program takes a user input for a score and outputs whether India or Pakistan wins based on
 * the score.
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
    else
    {
        cout << "Pakistan Wins \n";
    }

}