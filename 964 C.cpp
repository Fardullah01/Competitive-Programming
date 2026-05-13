#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,s;
        long long m,c=0;
        cin>>n>>s>>m;
        vector<long long>v;
        v.push_back(0);
        n=n*2;
        for(int i=0;i<n;i++)
        {
            long long k;
            cin>>k;
            v.push_back(k);
        }
        v.push_back(m);
        bool paichi=false;
        for(int i=0;i<n+2;i+=2)
        {
            c=abs(v[i]-v[i+1]);
            if(c>=s)
            {
              paichi=true;
              break;
            }
        }
        if(paichi)cout<<"YES\n";
        else cout<<"NO\n";
    }
}
