#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tot,basic,allow;
    double hra,da,pf;
    char  grade;
    cout<<"enter basic salary and grade:";
    cin>>basic;
    cin>>grade;

    hra=20*basic/100;
    da=(float)50/100*basic;
    if(grade=='A')
    allow=1700;
    else if(grade=='B')
    allow=1500;
    else
    allow=1300;
    pf=11*basic/100;
    tot=round(basic+hra+da+allow-pf);
    cout<<"total= "<<tot<<endl;
}