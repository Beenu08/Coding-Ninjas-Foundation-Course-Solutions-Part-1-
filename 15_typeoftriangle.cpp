//determin ethe type of triangle
#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter sides of triangle:";
    cin>>a>>b>>c;
    if(a==b && b==c && a==c)
    cout<<"triangle is equilateral";
    else if(a!=b && b!=c && c!=a)
    cout<<"triangle is scalene";
    else
    cout<<"triangle is isosceles";
}