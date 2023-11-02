//wap to find largest of n numbers:
#include<iostream>
using namespace std;
int main()
{
  //with using ARRAY
  /*
    int n,max;
    cout<<"enter total numbers:";
    cin>>n;
    int A[n];
    for(int i=1;i<=n;i++)
    {
      cin>>A[i];
    }
    max=A[1];
    for(int i=1;i<=n;i++)
    {
      if(max<A[i])
      {
        max=A[i];
      }
    }
   cout<<"MAximum="<<max;
   */
  //without using array
  int n;
  cin>>n;
  int num,count=1,max=-1;
  while(count<=n)
  {
    cin>>num;
    if(max<num)
    max=num;
    count++;
  }
  cout<<"MAx="<<max;
}

