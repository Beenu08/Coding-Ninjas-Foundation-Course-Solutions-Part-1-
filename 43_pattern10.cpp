/*
1
12
123
1234
*/
#include <iostream>
using namespace std;

int main ()
{
    int n;
    cin>>n;

    int i=1;
    while(i<=n)
    {
        int j=1;
        while(j<=i)
        {
            cout  <<  j  ;
            j++;

        }
        cout << endl;
        i++;
    }
}