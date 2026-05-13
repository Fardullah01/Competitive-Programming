#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,c1=0,c2=0,k1=0,k2=0;
        cin>>n;
        string s,p;
        cin>>s;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='0')c1++;
            if(s[i]=='1')c2++;
        }
        if(c1>=c2)cout<<"YES"<<endl;
        else
        {
            for(int i=0; i<n-1; i++)
            {
                p.push_back(s[i]);
                if(s[i]==s[i+1])p.push_back('1');
                else p.push_back('0');
            }
            p.push_back(s[n-1]);
            //cout<<p;
            for(int i=0; i<n; i++)
            {
                if(p[i]=='0')k1++;
                if(p[i]=='1')k2++;
            }
            if(k1>k2)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
}
