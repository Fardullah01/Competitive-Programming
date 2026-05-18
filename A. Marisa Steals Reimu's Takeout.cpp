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
        int a0=0,a1=0,a2=0;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            if(a==1)a1++;
            else if(a==2)a2++;
            else a0++;
        }
        if(a1>=a2)
        {
            cout<<a0+a2+((a1-a2)/3)<<endl;
        }
        else
        {
             cout<<a0+a1+((a2-a1)/3)<<endl;
        }
    }
}

