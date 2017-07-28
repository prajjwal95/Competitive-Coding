#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        double u,v,x,res=0;
        cin>>u>>v>>x;
        res=x/(u+v);
        cout<<std::fixed;
        cout<<setprecision(10)<<res<<endl;
    }
    return 0;
}
