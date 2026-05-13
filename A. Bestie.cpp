#include<bits/stdc++.h>
#define endl '\n'
#define fast ios::sync_with_stdio(0);cin.tie(0);
#include <numeric>
using namespace std;
int main()
{
    fast;
    int t;
    cin>>t;
    while(t--)
    {
        int n;//,k=0;
        cin>>n;
        bool paichi=false;
        vector<int>v(n),ans(n,0);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }
        int k=accumulate(v.begin(),v.end(),v[0], gcd);
         if(k==1)
         {
             cout<<0<<endl;
         }
        else
        {
         for(int i=0;i<n;i++)
         {
             int pp=__gcd(n,i+1);
             if(pp=1)
             {
                 ans[i]=n-(i+1)+1;
                 continue;
             }
             else
             {
                 while(true)
                 {
                     v[i]=pp;
                     int jj=accumulate(v.begin(),v.end(),v[0], gcd);
                     ans[i]+=(n-(i+1)+1);
                     if(jj==1)break;
                 }
                 vector<int>x;
                 for(auto it:ans)
                 {
                     if(it!=0)x.push_back(it);
                 }
                 cout<<*min_element(x.begin(),x.end())<<endl;
             }
         }
        }
    }
}

