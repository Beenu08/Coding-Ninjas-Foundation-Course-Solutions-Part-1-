//wap to check entered number is prime or not
#include<iostream>
using namespace std;
int main()
{
    int n,j=0;
    cout<<"enter number:";
    cin>>n;
    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            j=1;
           // cout<<"No. is not prime ";
          //  break;
        }
    }
    if(j==1)
    cout<<"number is non-prime";
    else
    cout<<"number is prime";
}