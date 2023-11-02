//wap to print prime number upto n:
#include<iostream>
using namespace std;
int main()
{
    int s,e;
    cout<<"Enter number:";
    cin>>s>>e;
    for(int i=s;i<=e;i++)
    { 
        int c=0;
        for(int j=1;j<=i;j++)
        {
            if(i%j==0)
            c++;
            //cout<<i<<" is prime ";
        }
        if(c==2)
        cout<<i<<" is prime \n";

    }
}