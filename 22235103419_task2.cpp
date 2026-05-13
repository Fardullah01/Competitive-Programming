#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<int,pair<int,int>>a,pair<int,pair<int,int>>b)
{
    return a.second.first<b.second.first;
}
bool cmp2(pair<int,pair<int,int>>a,pair<int,pair<int,int>>b)
{
    return a.second.second<b.second.second;
}
int main()
{
    int n;

    cout<<"enter the number of process : ";
    cin>>n;
    cout<<"enter the cpu times :\n";
    int a[n],b[n];
    for(int i=0; i<n; i++)cin>>a[i];
    cout<<"enter the arival times :\n";
    for(int i=0; i<n; i++)cin>>b[i];
    vector<pair<int,pair<int,int>>>v;
    for(int i=0; i<n; i++)
    {
        v.push_back({i,{b[i],a[i]}});
    }
    sort(v.begin(),v.end(),cmp);
    vector<int>wt(n,0),tt(n,0);
    // for(auto it:wt)cout<<it<<" ";
    int c=0;
    int st=1,lt=0,pp=v[0].second.second;
    for(int i=1; i<n; i++)
    {

        if(v[i].second.first<=pp)
        {
            //cout<<v[i].second.first<<endl;
            c++;
        }
        if(c>1)
        {
            sort(v.begin()+st,v.begin()+(st+c+1),cmp2);
            st+=c;
            c=0;
            pp=v[i].second.second;
        }

    }
//  for(auto it:v)cout<<it.first<<" "<<it.second.first<<" "<<it.second.second<<endl;
    int cnt=v[0].second.first;
    for(auto it:v)
    {
        wt[it.first]=cnt-it.second.first;
        cnt=cnt+it.second.second;
        tt[it.first]=wt[it.first]+it.second.second;
        // cout<<cnt<<" ";

    }
    double wa=0,ta=0;
    for(int i=0; i<n; i++)
    {
        cout<<"Process "<<i+1<<" : waiting time : "<<wt[i]<<"     turnaround time :"<<tt[i]<<endl;
        wa+=wt[i];
        ta+=tt[i];
    }
    cout<<"Average Waiting time: "<<fixed<<setprecision(2)<<wa/n<<endl;
    cout<<"Average turnaround time: "<<fixed<<setprecision(2)<<ta/n<<endl;
}
