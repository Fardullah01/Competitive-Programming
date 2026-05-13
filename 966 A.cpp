#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       string s;
       cin>>s;
       if(s[0]=='1'&&s[1]=='0')
       {
           if((s[2]-48)>=2||(s[2]=='1'&&s.size()>3)) cout<<"YES\n";
           else  cout<<"NO\n";
       }
       else cout<<"NO\n";
    }
}
