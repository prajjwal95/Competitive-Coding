#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;


int main() {
    int n;
    cin>>n;
    ll a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    ll diff[n];
    for(int i=0;i<n-1;i++){
        diff[i]=a[i+1]-a[i];
    }
    ll mini=WINT_MAX;
    for(int i=0;i<n-1;i++){
        if(mini>diff[i])
            mini=diff[i];
    }
    for(int i=0;i<n-1;i++){
        if(diff[i]==mini)
        {
            cout<<a[i]<<" "<<a[i+1]<<" ";
        }
    }
    cout<<endl;
    return 0;
}
