#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s,p="";
        cin>>s;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='0'&&s[i+1]=='0')continue;
            else p=p+s[i];
        }

        int c0=0,c1=0;
        for(int i=0;i<p.size();i++)
        {
            if(p[i]=='0')c0++;
            else c1++;
        }
        if(c1>c0)cout<<"YES\n";
        else cout<<"NO\n";
    }
}
