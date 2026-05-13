#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[3];
    for(int i=0; i<3; i++)cin>>a[i];
    sort(a,a+3);
    int x=(n/a[0])-1,y=(n/a[1]),z=(n/a[2]);
    int k=(n%a[1])/a[0];
    int l=(n%a[2])/a[0];
    int m=(n%a[2])/a[1];
    if(n%a[0]==0||(x*a[0])+a[1]==n||(x*a[0])+a[2]==n)cout<<x+1<<endl;
    else if(n%a[1]==0||(y*a[1])+a[0]==n)cout<<y+1<<endl;
    else if((y*a[1]+k*a[0])==n) cout<<y+k<<endl;
      else if  (((y-1)*a[1])+a[2]==n)cout<<y<<endl;
    else cout<<z<<endl;
}


