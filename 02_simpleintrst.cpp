//wap to find simple interest
#include<iostream>
using namespace std;
int main()
{
    int p,r,t,si;
    cout<<"Enter principal,rate and time:";
    cin>>p>>r>>t;
    si=p*r*t/100;
    cout<<"Simple interest="<<si;
}