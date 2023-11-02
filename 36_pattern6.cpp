/*
_ _ _ *
_ _ * * *
_ * * * * *
* * * * * * *
*/
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int i=1;
    while(i<=n)
    {
        int j=1;
        while(j<=n-i)
        {
            cout<<" ";
            j++;
        }
        int k=1;
        while(k<=i)
        {
            cout<<"*";
            k++;
        }
        int t=1;
        while(t<=i-1)
        {
           cout<<"*";
           t++;
        }
        cout<<endl;
        i++;
    }
}