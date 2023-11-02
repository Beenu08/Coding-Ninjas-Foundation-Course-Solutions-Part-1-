/*
ABCD
BCDE
CDEF
DEFG
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
        int j=1;
        //char k='A'+i-1;
        int l='A'+i-1;
        while(j<=n)
        {
            char k=l+j-1;
          cout<<k;
        k++;
          j++;

        }
        i++;
        cout<<endl;
    }
}
