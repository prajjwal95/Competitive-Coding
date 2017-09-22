#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
     int n,k;
    cin>>n>>k;
    int a[n];
    int rem[k]={0};
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++){
        rem[a[i]%k]++;
    }
    int res=min(1,rem[0]);
    for(int i=1;i<k/2+1;i++){
        if(i!=k-i)
        res+=max(rem[i],rem[k-i]);
    }
    if(k%2==0&&rem[k/2]!=0)
        res++;
    cout<<res<<endl;
    return 0;
}
