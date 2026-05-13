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
        int n,c,cnt=0,gun=1;
        cin>>n>>c;
         vector<long long>v,v1;
         for(int i=0;i<n;i++)
         {
             long long a;
             cin>>a;
             v.push_back(a);
         }
         sort(v.rbegin(),v.rend());
         stack<long long>st,st1;
         for(auto it:v)
         {
             st.push(it);
         }
         while(true)
         {
             while(!st.empty())
             {
                 if(st.top()<=c)
                 {
                     st1.push(st.top());
                 }
                 else
                 {
                     cout<<st.top()<<endl;
                     cnt++;
                 }
                 st.pop();
             }
            gun++;
            if(st1.size()==0)break;
            //cout<<st1.top()<<endl;
             st1.pop();
             if(st1.size()==0)break;
             while(!st1.empty())
             {
                 st.push(st1.top()*gun);
                 st1.pop();
             }
         }
         cout<<cnt<<endl;
    }
}

