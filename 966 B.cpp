#include<bits/stdc++.h>
using namespace std;
bool check( int x, set<int>&s)
{
    if(s.find(x-1)!=s.end()||s.find(x+1)!=s.end())
    return true;
    else return false;

}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v(n);
        set<int>s;
        cin>>v[0];
        s.emplace(v[0]);
        bool fl=false;
        for(int i=1; i<n; i++)
        {
            cin>>v[i];
            if(fl==false)
            {
                if(!check(v[i],s))
                {
                    fl=true;
                }
                else s.emplace(v[i]);
            }
            else continue;
        }
       if(!fl)cout<<"YES\n";
       else cout<<"NO\n";

    }
}

