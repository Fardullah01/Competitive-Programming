#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,c1=0,c2=0;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            if(v[i]<0)
        {
            c1++;
        }
            else if(v[i]==0)
            {
                c2++;
            }
        }
        if(c1%2!=0||c2) cout<<0<<endl;
        else cout<<1<<endl<<1<<" "<<0<<endl;
    }
}
