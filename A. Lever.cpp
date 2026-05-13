#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int j=0;j<t;j++)
    {
        int n;
        cin>>n;
        int x=((n+1)/2)+1;
      for(int i=0;i<n;i++)
      {
          if(i%2==0)cout<<-1<<" ";
         else
         {
             if(n==3)cout<<3<<" ";
             else cout<<2<<" ";
         }
      }
      cout<<endl;
    }
}

