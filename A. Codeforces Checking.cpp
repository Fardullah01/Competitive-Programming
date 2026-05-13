#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string c="codeforces";
    while(n--)
    {
        int t=0;
        char s;
        cin>>s;
        for(int i=0; i<c.size(); i++)
        {
            if(c[i]==s)
            {
                //cout<<"YES"<<endl;
               // break
               t=1;
            }
        }
        if(t==1) cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}
