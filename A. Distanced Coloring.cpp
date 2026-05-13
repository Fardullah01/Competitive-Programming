#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,r,c;
        cin>>n>>r>>c;
        if(n>c) n=c;
        if(r>c)r=c;
        cout<<n*r<<endl;
    }
}

