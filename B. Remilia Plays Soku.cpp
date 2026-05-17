#include<bits/stdc++.h>
#define endl '\n'
#define fast ios::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main()
{
 //   fast;
    int t;
    cin>>t;
    while(t--)
    {
        int n,x,y,z;
        cin>>n>>x>>y>>z;
        if(n<=3)cout<<1<<endl;
        else
        cout<<min(abs(x-y),n-abs(x-y))+z<<endl;
    }
}

