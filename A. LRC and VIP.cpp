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
        long k;
        cin>>k;
        long long a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        if(k<(*max_element(a,a+n)-*min_element(a,a+n)-1))cout<<"Jerry\n";
        else
        {

            if( accumulate(a,a+n,0)%2==0) cout<<"Jerry\n";
            else cout<<"Tom\n";
        }
    }
}

