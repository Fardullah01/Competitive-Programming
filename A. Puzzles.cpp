#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int a[m];
    for(int i=0; i<m; i++)cin>>a[i];
    sort(a,a+m);
    int Min=abs(a[0]-a[n-1]);
    for(int i=0; i<m; i++)
    {
        if ((i+n)>m)
        {
               break;
        }

        else
        {

            int x=abs(a[i]-a[i+n-1]);
            if(Min>=x) Min=x;
        }
    }
    cout<<Min;
}
