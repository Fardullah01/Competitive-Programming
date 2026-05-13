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
       int x,y;
       cin>>x>>y;
       if(x%2 && y%2)cout<<"NO\n";
       else cout<<"YES\n";
    }
}

