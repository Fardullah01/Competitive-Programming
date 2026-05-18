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
        string s;
        cin>>s;
        int c4=0,c1=0,c0=0,c11=0,c00=0;
        vector<int>v;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='4')c4++;
            else if(s[i]=='1'||s[i]=='3')v.push_back(1);
            else if(s[i]=='2') v.push_back(0);
        }
        if(c4 ==s.size())cout<<c4<<endl;
        else
        {
       int x=0,y=v.size()-1;
      for(int i=0;i<v.size();i++)
      {
          if(v[i]==1)
          {  x=i;
              break;}
          else c0++;
      }
      for(int i=v.size()-1;i>=0;i--)
      {
          if(v[i]==0)
          {  y=i;
              break;}
          else c1++;
      }
      for(int i=x;i<=y;i++)
      {
          if(v[i]==0)c00++;
          else c11++;
      }
      cout<<min(c11,c00)+c4<<endl;
    }
}
}


