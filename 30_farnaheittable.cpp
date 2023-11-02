#include<iostream>
using namespace std;
int main()
{
    int s,e,g;
    cout<<"Enter starting and ending temperature:";
    cin>>s>>e;
    cout<<"enter gap:";
    cin>>g;

    int i=s;
    while(i<=e)
    {
        int c= (i-32)*(5.0/9);
        cout << i<< "\t" << c << endl;
        i=i+g;
    }
}