//wap to print sum of n numbers
#include<iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cin>>n;
    for(int i=1;i<=n;i++)
{
    sum=sum+i;
}
cout<<"Sum="<<sum;
}