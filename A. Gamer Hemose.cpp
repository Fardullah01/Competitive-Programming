#include<bits/stdc++.h>
using namespace std;
bool cmp(int a, int b)
{
    return a>b;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,h;
        cin>>n>>h;
      int v[n];
      for(int i=0;i<n;i++)cin>>v[i];
      sort(v,v+n,cmp);
      int m1=v[0];
      int m2=v[1];
      int r=0;
      cout<<r<<endl;
    }
}
