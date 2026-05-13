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
          int mx1=0,mx2=0,c1=0,c2=0;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            if(i%2==0)
            {
                c1++;
                mx1=max(mx1,a);
                //cout<<mx1<<" ";
            }
            else
            {
                c2++;
                  mx2=max(mx2,a);
                 //cout<<mx2<<" ";
            }
        }
       if(mx1+c1>mx2+c2) cout<<mx1+c1<<endl;
      else cout<<mx2+c2<<endl;
    }
}

