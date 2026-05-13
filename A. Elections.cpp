#include<bits/stdc++.h>
#define endl "\n"
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fast;
    int t;
    cin>>t;
    while(t--)
    {
        int c=0,c1=0;
        vector<int>v(3);
        for(int i=0; i<3; i++)cin>>v[i];
        int m=*max_element(v.begin(),v.end());
        for(int i=0; i<3; i++)
        {
            if(m==v[i])c++;
            if(v[i]==0)c1++;
        }
        if(c==3)
        {
            for(int i=0; i<3; i++)
            {
                cout<<m-v[i]+1<<" ";
            }

        }
        else if(c==2&&c1==2)
        {
             for(int i=0; i<3; i++)
            {
                cout<<m-v[i]+1<<" ";
            }
        }
        else

        {
            for(int i=0; i<3; i++)
            {
                if(m==v[i])cout<<m-v[i]<<" ";
                else cout<<m-v[i]+1<<" ";
            }
        }
        cout<<endl;
    }
}
