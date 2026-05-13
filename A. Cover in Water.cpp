#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int c=0,c1=0,c2=0;
        string s;
        cin>>s;
        for(int i =0;i<n;i++)
        {
            if(s[i]=='.'&&s[i+1]=='.'&&s[i+2]=='.')c++;
            if(s[i]=='.')c1++;
            if(s[i]=='#')c2++;
        }
        if(c2==n)cout<<0<<endl;
        else if (c)cout<<2<<endl;
        else cout<<c1<<endl;
    }
}
