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
        int n,a,b;
        cin>>n>>a>>b;
       int ar[n];
       for(int i=0;i<n;i++)cin>>ar[i];
       sort(ar,ar+n);
       long long ans=accumulate(ar,ar+(abs(a-b)+1),0);
       cout<<ans<<endl;
    }
}

