#include<bits/stdc++.h>
#define ll long long
#include<iostream>
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll a,b,m,res=0;
        cin>>a>>b>>m;
        res=((b-a)/m);
        if(b%m==0||a%m==0)
            res++;
        cout<<res<<endl;
    }
    return 0;
}
