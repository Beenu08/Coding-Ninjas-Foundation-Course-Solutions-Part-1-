/*
    1
   23
  345
 4567
56789
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
        int l=i;
        while(k<=i)
        {
            cout<<l;
            k++;
            l++;
        }
        cout<<endl;
        i++;
    }
}