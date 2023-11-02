#include<iostream>
using namespace std;

int main()
{
    int n,even=0,odd=0;
    cout<<"Enter number:";
    cin>>n;

    while(n!=0)
    {
      int r=n%10;
      if(r%2==0)
      even=even+r;
      else
      odd=odd+r;
      n=n/10;
    }
    cout<<even <<" " << odd <<endl;
}