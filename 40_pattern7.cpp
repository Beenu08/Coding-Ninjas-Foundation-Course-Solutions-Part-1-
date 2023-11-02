/*
****
****
****
****
*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter n:";
    cin>>n;

    int i=1;
    while(i<=n)
    {
        int j=1;
        while(j<=n)
        {
            //cout<<"*";
            cout<<n;
            j++;
        }
        cout<<endl;
        i++;
    }
}