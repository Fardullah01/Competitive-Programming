#include<bits/stdc++.h>
#define endl '\n'
#define fast ios::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main()
{
    fast;
    int t;
    cin>>t;
     string s="";
       for(int i=0;i<22;i++)
       {
           if(i%2==0)
           s+="aeiou";
           else s+="uoiea";
       }
    while(t--)
    {
        int n;
        cin>>n;
        string p="";
        for(int i=0;i<n;i++)
          p+=s[i];
            sort(p.begin(),p.end());
        cout<<p<<endl;
    }
}

