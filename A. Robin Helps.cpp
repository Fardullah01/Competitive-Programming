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
         double s=0;
       cin>>n;
       vector<double>a(n);
       for(int i=0;i<n;i++)
       {cin>>a[i];
       s+=a[i];
       }
       if(n<=2)
        cout<<-1<<endl;
       else
       {
       sort(a.begin(),a.end());
      long long sum1=s;
       s=(s/n)/2;
       int cnt=0;
       for(int i=0;i<n;i++)
       {
           if(a[i]<s)
           {
               cnt++;
           }
       }
        if(cnt>(n/2)) cout<<0<<endl;
        else
        {
            int z=n/2;
             long long ok=(a[z]*2)*n;
           cout<<ok+1-sum1<<endl;
        }
       }
}
}
