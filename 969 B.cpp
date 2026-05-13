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
        vector<long long >v(n);
        vector<long long >k;
        for(int i=0;i<n;i++) cin>>v[i];
        //sort(v.rbegin(),v.rend());
        long long mx=*max_element(v.begin(),v.end());
        //cout<<mx;
        while(m--)
        {
            char c;
            long  l,r;
            cin>>c>>l>>r;
            if(c=='-')
            {
                if(mx>=l &&mx<=r)
                {
                      mx=mx-1;
                   //  cout<<mx<<" "<<r<<endl;
                        k.push_back(mx);
                }
                else
                {
               //  cout<<mx<<" "<<r<<endl;
                        k.push_back(mx);
                }
            }
            else if(c=='+')
            {
                   if(mx>=l &&mx<=r)
                {
                     mx=mx+1;
                     //cout<<mx<<" "<<r<<endl;
                        k.push_back(mx);
                }
                else
                {

                   //  cout<<mx<<" "<<r<<endl;
                        k.push_back(mx);
                }
            }
        }
         for(auto it:k)cout<<it<<" ";
    cout<<endl;
    }

}

