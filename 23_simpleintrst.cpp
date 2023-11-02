#include<iostream>
using namespace std;
int main()
{
     float p,r,t,si;
    cout<<"enter principal,rate and time: ";
    cin>>p>>r>>t;
    si=p*r*t/100;
    cout<<"Simple interest= "<<si<<endl;
}