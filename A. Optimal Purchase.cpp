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
        long long n,a,b;
        cin>>n>>a>>b;
        if(n<=3)
        {
            cout<<min(n*a,b)<<endl;
        }
        else
        {
            long long d=n/3;
            if(n%3==0)
            {
                cout<<min(n*a,d*b)<<endl;
            }
            else
            {
                long long k=n-(3*d);
                if(k*a<=b)cout<<min((n-k)*a,d*b)+(k*a)<<endl;
                else cout<<min((n-k)*a,d*b)+b<<endl;
            }
        }

    }
}

