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
        vector<int>v1(n);
        map<int,int> mp;
        for(int i=0; i<n; i++)
        {
           cin>>v1[i];
        }
        for(int i=*min_element(v1.begin(),v1.end());i<=*max_element(v1.begin(),v1.end());i++)mp[i]=0;
        for(int i=0;i<n;i++)mp[v1[i]]++;
    //   for(auto it:mp)cout<<it.first<<" "<<it.second<<endl;
       vector<pair<int,int>>vp(mp.begin(),mp.end());
       sort(vp.begin(),vp.end());
       bool ok=true;
       for(int i=0;i<vp.size();i++)
       {
           if(vp[i].second%2!=0)
           {
               ok=false;
               break;
           }
       }
       if(ok)cout<<"YES\n";
        else
       {
                  bool paichi=true;
       for(int i=0;i<vp.size()-1;i++)
       {
           if(vp[i].second==1)
           {
               paichi=false;
               break;
           }
           if(vp[i].second==0)continue;
           else vp[i+1].second+=(vp[i].second-2);
          // cout<<vp[i].second<<endl;
       }
     //  cout<<vp[vp.size()-1].second<<endl;
       if(vp[vp.size()-1].second<2)paichi=false;
       if(paichi||vp.size()==1)cout<<"YES\n";
       else cout<<"NO\n";
       }

    }
}
