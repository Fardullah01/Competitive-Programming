#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a[3]={};
      string s[3],q,x;

      for(int i=0;i<3;i++)
      {
          cin>>s[i];
          for(int j=0;j<3;j++)
          {
              a[i]=a[i]+s[i][j];
          }
      }
      for(int i=0;i<3;i++)
      {
          if(a[i]==196)cout<<"A"<<endl;
          else if(a[i]==195)cout<<"B"<<endl;
          else if(a[i]==194)cout<<"C"<<endl;
      }
    }
}
