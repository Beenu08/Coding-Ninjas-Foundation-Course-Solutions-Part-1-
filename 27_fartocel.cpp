#include<iostream>
using namespace std;

int main()
{
    int f;
    cout<<"enter farnaheit";
    cin>>f;

    float  c = (f-32)*(5.0/9);
    cout << c << endl;
    
    int k,l;
    cin >> k >> l;

    bool a = k == l;
    bool b = k < l;
    bool d = !k ;

    cout <<  (a && b) << endl ;
    cout  <<  (b || a) << endl;
    cout << (!d ) << endl;

}