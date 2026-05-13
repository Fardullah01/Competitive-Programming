#include<bits/stdc++.h>
using namespace std;
class own
{
public:
    char c;
    int k;
};
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        int n;
        cin>>n;
        cin>>s;
        char Max = *max_element(s.begin(), s.end());
        own C[26];
        int j = 0;
        for(char i='A'; i<='Z'; i++)
        {
            C[j].c=i;
            C[j].k=0;
            j++;
        }
        for(int i=0; i<s.size(); i++)
        {
            C[s[i]-'A'].k++;
        }
        int p=0;
        for (int i=0,z=1; i<=26; i++,z++)
        {
            if(C[i].k>=z)p++;
        }
        cout<<p<<endl;
    }
}
