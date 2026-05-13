#include<bits/stdc++.h>
#define endl '\n'
#define fast ios::sync_with_stdio(0);cin.tie(0);
using namespace std;
bool srch(long long x,set<long long>&s)
{
    auto it=s.find(x);
    if(it!=s.end()) return true;
    return false;
}
int main()
{
    fast;
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<pair<long long ,long long>>v(n);
        set<long long>s0;
        set<long long >s1;
        for(int i=0; i<n; i++)
        {
            cin>>v[i].first>>v[i].second;
            if(v[i].second==0)s0.emplace(v[i].first);
            if(v[i].second==1)s1.emplace(v[i].first);
        }
        sort(v.begin(),v.end());
        long long c=0,k=0;
       // cout<<"Ok\n";
        for(int i=0; i<n; i++)
        {
            int k=0;
            if(v[i].second==1&&v[i-1].second==0&&v[i].first==v[i-1].first)
            {
                c+=n-2;
            }
            if(v[i].second==1&&srch(v[i].first-1,s0)&&srch(v[i].first+1,s0))
            {
                c++;
            }
            else if(v[i].second==0&&srch(v[i].first-1,s1)&&srch(v[i].first+1,s1))
                c++;
        }
        cout<<c<<endl;
    }
}

