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
        vector<long long>v(n);
        map<int ,long>mp,mp2;
        vector<pair<int ,long>>vp;
        for(int i=0;i<n;i++)cin>>v[i];
        int x=unique(v.begin(),v.end())-v.begin();
        for( auto it:v)mp[it]++;
       for(int i=0;i<x;i++)
        {
           mp2[i]=mp[v[i]];
        }
        for(auto it :mp2)cout<<it.first<<" "<<it.second<<endl;
    }
}

