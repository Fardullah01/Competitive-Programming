#include<bits/stdc++.h>
#define endl '\n'
#define fast ios::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main()
{
    //fast;
    int t;
    cin>>t;
    while(t--)
    {
       long long a,b,c;
       cin>>a>>b>>c;
     long long x=ceil((double)a/(double)c),y=ceil((double)b/(double)c);
     if(x>y)cout<<(x*2)-1<<endl;
     else cout<<y*2<<endl;
    }
}

