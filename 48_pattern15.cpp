//reverse code pattern
/*
1
21
321
4321
*/
#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int i=1;
    while(i<=n)
    {
        int j=1,p=i;
        while(j<=i)
        {
            cout << p;
            p--;
            j++;
        }
        i++;
        cout<<endl;
    }
}