#include<bits/stdc++.h>
#define endl '\n'
#define fast ios::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main()
{
    fast;
    int t;
    cin>>t;
    while(t--)
    {
       int n;
       cin>>n;
         vector<int>v(n);
       for(int i=0;i<n;i++)
       {
           string s;
           cin>>s;
           for(int j=0;j<s.size();j++)
           {
               if(s[j]=='#')
               {
                v[i]=j+1;
               break;
               }
           }
           s.clear();
       }
       for(int i=n-1;i>=0;i--)cout<<v[i]<<" ";
       cout<<endl;
    }
}

