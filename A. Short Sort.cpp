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
       string s;
       cin>>s;
       string p="abc";
       int c=0;
       for(int i=0;i<3;i++)
       {
           if(s[i]!=p[i])c++;
       }
       if(c==3)cout<<"NO\n";
       else cout<<"YES\n";
    }
}

