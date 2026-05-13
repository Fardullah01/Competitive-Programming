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
        int n,c,cnt=0,gun=1;
        cin>>n>>c;
        vector<long long >v(n),v2;
        for(int i=0;i<n;i++)cin>>v[i];
        sort(v.rbegin(),v.rend());
        for(int i=0;i<n;i++)
        {
          if(v[i]*gun<=c)
          {

            //  cout<<v[i]*gun<<" ";
              gun*=2;
          }
          else
          {
              cnt++;
              v2.push_back(v[i]*gun);
          }
        }
       // cout<<endl;
       // for(auto it:v2)cout<<it<<" ";
        cout<<cnt<<endl;
    }
}

