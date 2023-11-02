//wap to write fibonacci series
#include<iostream>
using namespace std;
int main()
{
    int a=0,b=1,c,n;
    cout<<"enter n :";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
    if(a<n)
    {
        cout<<a<<" ";
        c=a+b;
        a=b;
        b=c;
    }
    }
}