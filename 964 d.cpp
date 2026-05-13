#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       string s1,s2,s="";
       cin>>s1>>s2;
       bool fl=false;
       int j=0;
       for(int i=0;i<s1.size();i++)
       {
           if(s2.size()==j)
           {
               fl=true;
           }
         else   if(s2[j]==s1[i])
           {
               s=s+s2[i];
               j++;
           }
           else  if(s1[i]=='?')
           {
               s=s+s2[j];
               j++;
           }
           else s=s+s1[i];
       }
       if(fl)
       {
           for(int i=0;i<s.size();i++)
           {
               if(s1[i]!=s[i])s1[i]=s[i];
           }
            for(int i=0;i<s1.size();i++)
           {
               if(s1[i]=='?')s1[i]='x';
           }
           cout<<"YES\n";
           cout<<s1<<endl;;

       }
       else cout<<"NO\n";
    }
}

