#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#define  ll long long
using namespace std;
ll maxi(ll a,ll b,ll c)
{
    ll maxx;
    maxx =(a>b)?(a>c?a:c):(b>c?b:c);
    return maxx;
}
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector <int>arr(n);
        for(int i=0;i<n;i++)
            cin>>arr[i];
        reverse(arr.begin(),arr.end());
        ll sum[n]={0};
        ll dp[n]={0};
        sum[0]=arr[0];
        for(int i=1;i<n;i++)
           sum[i]+=sum[i-1]+arr[i];
        dp[0]=sum[0];
        dp[1]=sum[1];
        dp[2]=sum[2];
        for(int i=3;i<n;i++){
            dp[i]=maxi(sum[i]-dp[i-1],sum[i]-dp[i-2],sum[i]-dp[i-3]);
        }
        cout<<dp[n-1]<<endl;
    }
    return 0;
}
