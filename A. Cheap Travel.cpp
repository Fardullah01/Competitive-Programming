#include<bits/stdc++.h>
using namespace std;
int main()
{
   int a,b,c,d;
   cin>>a>>b>>c>>d;
   int n=a*c;
   int m=0;
   int k=0;
   if(a%b==0)m=(a/b)*d;
   else
   {
       m=(a/b)*d+(a%b)*c;
   }
   k=((a/b)+1)*d;
   int arr[]={n,m,k};
   sort(arr,arr+3);
   cout<<arr[0];
}

