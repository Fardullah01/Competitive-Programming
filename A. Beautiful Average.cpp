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
       long long a,b,k=0;
       cin>>a>>b;
       vector<int>v;
       k=a;
       while(k!=0)
       {
           if(k%2==1)v.push_back(1);
           else v.push_back(0);
           k/=2;
       }


       long long x=0,y=0,i=0;
       for(auto it:v)
       {
           if(it ==0)
           {x+=(pow(2,i));}
           y+=(pow(2,i));
           i++;
       }

          if(b>y)cout<<-1<<endl;
         else if(a==b)cout<<0<<endl;
          else if(b==y)
          {
              cout<<1<<endl<<x<<endl;
          }
          else {
                cout<<2<<endl;
              cout<<x<<" "<<y-b<<endl;
     }
    }
}

