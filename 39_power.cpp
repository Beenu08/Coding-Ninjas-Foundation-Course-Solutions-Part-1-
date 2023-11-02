#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p,c=1;
    cin>>n>>p;
    int k=1;


    //j=pow(n,p);
    while(k<=p)
    {
        c=c*n;
        k++;
    }
    cout<< c <<endl;
}