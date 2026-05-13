#include<bits/stdc++.h>
#define endl '\n'
#define fast ios::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main(){
    fast;
    int cases;
    cin>>cases;
    while(cases--){
        long long rows, cols;
        cin>>rows>>cols;
        vector<vector<long long>> matrix(rows, vector<long long>(cols));
        vector<pair<long long, int>> order;

        for(int i=0;i<rows;i++){
            long long total = 0;
            for(int j=0;j<cols;j++){
                cin>>matrix[i][j];
                total += matrix[i][j];
            }
            order.push_back({total, i});
        }

        sort(order.rbegin(), order.rend());

        vector<long long> merged;
        for(int i=0;i<rows;i++){
            for(auto value : matrix[order[i].second]){
                merged.push_back(value);
            }
        }

        for(int i=1;i<merged.size();i++) merged[i] += merged[i-1];
        cout<<accumulate(merged.begin(), merged.end(), 0LL)<<endl;
    }
    return 0;
}
