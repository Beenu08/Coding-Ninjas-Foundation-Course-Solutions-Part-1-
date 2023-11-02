//wap to find entered no. is odd or even
include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n==0)
    cout<<"no. is neither odd nor even";
   else  if(n%2==0)
    cout<<"even";
    else 
    cout<<"odd";
}