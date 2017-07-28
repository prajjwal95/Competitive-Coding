#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        ll u,v;
        cin>>u>>v;
        ll d=u+v;
        ll d1=0;
        d1=(d*(d+1))/2;
        d1+=u+1;
        cout<<d1<<endl;
    }
    return 0;
}
