#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<int,pair<int,int>> a, pair<int,pair<int,int>> b)
{
    if(a.second.first == b.second.first)
        return a.second.second < b.second.second;
    return a.second.first < b.second.first;
}
bool cmp2(pair<string,pair<int,int>> a, pair<string,pair<int,int>> b)
{
    return a.second.second < b.second.second;
}
int main()
{
    int n;
    cout<<"enter the number of process : ";
    cin>>n;
    int a[n],b[n];
    cout<<"enter the cpu times :\n";
    for(int i=0;i<n;i++)cin>>a[i];
    cout<<"enter the arival times :\n";
    for(int i=0;i<n;i++)cin>>b[i];
    vector<pair<int,pair<int,int>>>v;
    for(int i=0;i<n;i++)
    {
        v.push_back({i,{b[i],a[i]}});
    }
    sort(v.begin(),v.end(),cmp);
    vector<int>st(n,-1),sesh(n,0);
    vector<pair<string,pair<int,int>>>vp;
    int x=0;
    while(true)
    {
        for(auto it : v)
        {
            if(it.second.first == x)
            {
                vp.push_back({"not",{it.first,it.second.second}});
            }
        }
        bool sob_Sesh = true;
        for(auto it : v)
        {
            if(sesh[it.first] == 0)
            {
                sob_Sesh = false;
                break;
            }
        }
        if(sob_Sesh) break;

        if(!vp.empty())
        {
            //for(auto it:vp)cout<<it.first<<" "<<it.second.first<<" "<<it.second.second<<endl;
            sort(vp.begin(),vp.end(),cmp2);
            if(vp[0].first != "start")
            {
                vp[0].first = "start";
                if(st[vp[0].second.first] == -1)
                    st[vp[0].second.first] = x;
            }
            vp[0].second.second--;
            if(vp[0].second.second == 0)
            {
                sesh[vp[0].second.first] = x + 1;
                vp.erase(vp.begin());
            }
        }
        x++;
    }
    vector<int>tt(n,0),wt(n,0);
    for(int i=0;i<n;i++)
    {
        tt[i]=sesh[i]-b[i];
    }
    for(int i=0;i<n;i++)
    {
        wt[i]=tt[i]-a[i];
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
