/*
1
23
456
789910
*/
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int i=1,k=1;
    while (i<=n)
    {
        int j=1;
        while(j<=i)
        {
            cout<<k;
            k++;
            j++;

        }
        i++;
        cout<<endl;
    }
}