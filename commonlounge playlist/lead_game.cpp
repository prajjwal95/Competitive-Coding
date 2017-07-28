#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin>>n;
    ll a[n],b[n],sum=0,maxa=0,maxb=0;
    int w1=1,w2=2;
    for(int i=0;i<n;i++){
        cin>>a[i]>>b[i];
        if(a[i]>b[i]){
            if(a[i]-b[i]+sum>maxa)
                maxa=a[i]-b[i]+sum;
        }
        if(a[i]<b[i]){
            if(b[i]-a[i]-sum>maxb)
                maxb=b[i]-a[i]-sum;
        }
        sum+=a[i]-b[i];
    }
    if(maxa>maxb)
        cout<<w1<<" "<<maxa;
    else
        cout<<w2<<" "<<maxb;
    return 0;
}
