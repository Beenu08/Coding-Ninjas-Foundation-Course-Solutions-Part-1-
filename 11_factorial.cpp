//wap to find factorial of n
#include<iostream>
using namespace std;
int main()
{
    int n,fact=1;
    cin>>n;
    for(int i=n;i>=1;i--)
    {
        fact=fact*i;
    }
    cout<<"Factorial="<<fact;
}