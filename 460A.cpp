#include<bits/stdc++.h>
using namespace std;
int r;
int check(int n,int m)
{
    int c=m;
       r=0;
    int p=n;
    while(p!=0)
    {
        c=c+(p/m);
        r=r+(p%m);
        p=p/m;
    }
    return c;
}
int main()
{
    int n,m;
    cin>>n>>m;
    cout<<check(n,m)+check(r,m);
}
