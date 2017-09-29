#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int p,k,l;
        cin>>p>>k>>l;
        int a[l];
        for(int i=0;i<l;i++)
            cin>>a[i];
        sort(a,a+l,greater<int>());
        int res=0,co=1,k1=1;
        for(int i=0;i<l;i++){
            if(i==k1*k){
                co++;
                k1++;
            }
            res+=a[i]*co;
        }
        cout<<res<<endl;
    }
}
