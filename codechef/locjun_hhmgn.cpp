#include<bits/stdc++.h>
#define ll long long
#include<iostream>
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll n,s,res=0,j=0,sumj=0;
        cin>>n>>s;
        ll a[n],b[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n);
        while(j!=n&&res!=s){
            res=0;
            res=sumj+(a[j]*(n-j));
            sumj+=a[j];
            //cout<<sumj<<" "<<res<<endl;
            j++;
        }
       if(res==s)
        cout<<a[j-1]<<endl;
       else cout<<"-1"<<endl;
    }
    return 0;
}
