#include<bits/stdc++.h>
#define ll long long
#define siz 1000000000
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll n,b,nn,bb,c=0,f=0,res=0;
        cin>>n>>b;
        nn=n;
        bb=nn%b;
        nn=nn-bb;
        f=f+bb;
        ll cal;
        while(nn>0){
            cal=(nn/b)*f;
            cout<<cal<<" ";
            if(res<cal)
                res=cal;
            f+=b;
            nn=nn-b;
            if(nn<b)
                break;
        }
        cout<<endl;
        cout<<res<<endl;
    }
    return 0;
}




