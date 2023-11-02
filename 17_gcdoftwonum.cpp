//greatest common divisor of two numbers
#include<iostream>
using namespace std;
int main()
{
    int n1,n2,gcd=1;
    /*
    cout<<"enter two numbers:";
    cin>>n1>>n2;
    for(int i=2;i<=min(n1,n2);i++)
    {
        if(n1%i==0 && n2%i==0)
        {
            gcd=i;
        }
    }
    cout<<"greatest common divisor="<<gcd;
    */
   cin>>n1>>n2;
   while(n1!=n2)
   {
       if(n1>n2)
       n1=n1-n2;
       else
       n2=n2-n1;
   }
   cout<<n2;
}
