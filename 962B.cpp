#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<string>s(n);
        string p="";
        for(int i=0;i<n;i++)cin>>s[i];
        int ss=n/k,sp=(n*n)/(k*k),z=n*k;
    for(int i=0;i<n;i++)p=p+s[i];
    for(int i=0;i<p.size();i=i+z)
    {
      //  if(i!=0) i=i+z;
        for(int j=0;j<ss;j++)
        {
            cout<<p[i+(j*k)];
        }
        cout<<endl;
    }

    //cout<<endl<<endl;/*/
       /*for(int i=0;i<p.size();i++)
       {
           if(i%6==0)cout<<endl;
           else cout<<p[i];
       }/*/
      // cout<<sp<<endl<<endl<<endl;
    }
}

