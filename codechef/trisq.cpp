#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int b;
        cin>>b;
        b/=2;
        int res=((b*b)-b)/2;
        cout<<res<<endl;
    }
}
