// WAP to calculate area of circle using functions. 

#include<iostream>
using namespace std;
void circleArea(float r)
{
    float area = ((3.14)*r*r);
    cout <<"Area is : " << area;
    
}
int main()
{

    float r;
    cout << "Enter Radius : " << endl;
    cin >> r;
    circleArea(r);

}