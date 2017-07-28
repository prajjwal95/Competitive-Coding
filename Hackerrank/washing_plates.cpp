#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
   int n,k,i;
    cin>>n>>k;
   long long int p[n],d[n];
    for(i=0;i<n;i++){
        cin>>p[i]>>d[i];
    }
    long long int sum1=0;
    for(i=0;i<n;i++){
        sum1-=d[i];
    }
    cout<<sum1;
    sort(p,p+n,greater<int>());
    for(i=0;i<k;i++){
        sum1=sum1+p[i]+d[i];
    }
    cout<<sum1;
    return 0;
}
