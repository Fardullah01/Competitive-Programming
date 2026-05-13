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
        vector<int>v(n),v2(n);
        map<int,int>mp,mp2;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        int i=1;
        for(auto it:v)mp[it]++;
        bool thikthak=true;
        for(auto it:mp)
        {
           /* if(it.first>it.second)
            {
                thikthak=false;
                break;
            }
            else if(it.first<it.second)
            {
                if(it.second%it.first!=0)
                {
                thikthak=false;
                break;
                }
            }
            else
            {
                mp[it.first]=i;
                i=i+it.second/it.first;
            }/*/
            if(it.first<=it.second&&it.second%it.first==0)
            {
                mp[it.first]=i;
                i=i+it.second/it.first;
            }
            else
            {
                 thikthak=false;
                break;
            }
        }
        if(thikthak)
        {
           mp2=mp;
           for(auto it:v)mp2[it]=0;
           for(auto it:v)
           {
             if(mp2[it]<it)
             {
                 cout<<mp[it]<<" ";
                 mp2[it]++;
                 if(mp2[it]%it==0)
                 {
                     mp2[it]=0;
                     mp[it]++;
                 }
             }
           }
        }
        else cout<<-1;
        cout<<endl;
    }
}

