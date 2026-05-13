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
        int n,m;
        cin>>n>>m;
        int c=0;
        for(int i=n; i<=m; i++)
        {
            if(i%2!=0&&(i+2)<=m)
            {
                    i=i+3;
                    c++;
                    //  cout<<i<<endl;
            }
            else continue;
        }
        cout<<c<<endl;
    }
}
