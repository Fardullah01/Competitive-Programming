#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,k;
        cin>>x>>y>>k;
       long long xc=x*k,yc=y*k;
       int n=k-1;
        for(int i=0;i<k-1;i++)
        {
           //cout<<i+1<<" "<<i+1<<endl;
           if(x>0)cout<<-(i+1)<<" ";
           else cout<<i+1<<" ";
                       if(y>0)cout<<-(k-(i+1))<<" ";
           else cout<<(k-(i+1))<<" ";
           cout<<endl;
        }
        long long z=(k*(k-1))/2;
     //   cout<<z<<" "<<xc<<" "<<yc<<endl;
     if(x>0)cout<<z+x*k<<" ";
       else cout<<-(-xc+z)<<" ";
         if(y>0)cout<<z+y*k<<" ";
       else cout<<-(-yc+z)<<" ";
       cout<<endl;
    }
}
