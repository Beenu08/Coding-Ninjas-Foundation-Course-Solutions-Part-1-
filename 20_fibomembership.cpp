//wap to check wheather the member of fibonacci series
#include<iostream>
using namespace std;
int main()
{
    int n,a=0,b=1,c;
    cout<<"Enter n:";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(a<n)
        {
            c=a+b;
            a=b;
            b=c;
        }
    }
        if(a==n)
        {
        cout<<"yeah! Its the member of FIBONACCI SERIES";
        }
        else {
        cout<<"Its is not the member of fibonacci sEries";
        }
    
}