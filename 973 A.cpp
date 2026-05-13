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
         long long a,b,c;
        cin>>a>>b>>c;
        if(b>c)
        {
           if(a%c==0)cout<<a/c;
           else cout <<(a/c)+1;
        }
        else
        {
             if(a%b==0)cout<<a/b;
           else cout <<(a/b)+1;
        }
        cout<<endl;
    }
}

