//wap to check enterd no. is +ve,-ve or zero
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n==0)
    cout<<"zero";
    else if(n>0)
    cout<<"positive";
    else
    cout<<"negative";
}