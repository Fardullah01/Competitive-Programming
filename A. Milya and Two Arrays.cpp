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
        set<long long>s1,s2;
        for(int i=0; i<n; i++)
        {
            long long a;
            cin>>a;
            s1.insert(a);
        }
        for(int i=0; i<n; i++)
        {
            long long a;
            cin>>a;
            s2.insert(a);
        }
       if(s1.size()+s2.size()>3)cout<<"YES\n";
        else cout<<"NO\n";
    }
}

