#include<bits/stdc++.h>
using namespace std;
int solve(int x,int y)
{
    if(x>y) return 1;
    else if(x==y)return 0;
    else return -1;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a1,a2,b1,b2,c=0;
        cin>>a1>>a2>>b1>>b2;
        if((solve(a1,b1)+solve(a2,b2))>0)c++;
        if((solve(a1,b2)+solve(a2,b1))>0)c++;
       if ((solve(a2,b1)+solve(a1,b2))>0)c++;
        if((solve(a2,b2)+solve(a1,b1))>0)c++;
        cout<<c<<endl;
    }
}

