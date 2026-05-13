#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
void solve()
{
    int n,c=0;
    cin>>n;
    vector<int>v1,v2,v3;
    while(n--)
    {
        int a,x;
        cin>>a>>x;
        if(a==1)v1.push_back(x);
        else if(a==2)v2.push_back(x);
        else if(a==3)v3.push_back(x);
    }
      int x1=*max_element(v1.begin(),v1.end());
      int x2=*min_element(v2.begin(),v2.end());
   for(int i=0;i<v3.size();i++)
   {
       if(v3[i]>=x1&&v3[i]<=x2)c++;
   }
   int p=x2-x1-c+1;
   if(p>0)cout<<p<<endl;
   else cout<<0<<endl;
}
int main()
{
   fast;
    int t;
    cin>>t;
    while(t--)
    {
      solve();
    }
}
