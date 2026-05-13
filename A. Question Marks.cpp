#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        unordered_map<char,int>mp;
        for(auto it:s)mp[it]++;
        int c=0;
        for(auto it:mp)
        {
            if(it.first=='?')continue;
            else if(it.second>n)c=c+n;
            else c+=it.second;
        }

        cout<<c<<endl;
    }
}
