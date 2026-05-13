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
        int n,s1=0,cnt=0;
        cin>>n;
        string s;cin>>s;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='1')s1++;
        }
        for(int i=0;i<n;i++)
        {
            if(s[i]=='0')cnt+=(s1+1);
            else cnt+=(s1-1);
        }
        cout<<cnt<<endl;
}
}

