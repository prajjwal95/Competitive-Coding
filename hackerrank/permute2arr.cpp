#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
//sort A in ascending and B in descending or vice-versa.This is the best case possible, hence even if one i-th value fails,
//permutation is not possible

int main() {
    int q;
    cin>>q;
    while(q--){
    int n,k,flag=1;
    cin>>n>>k;
    int a[n],b[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
        cin>>b[i];
    sort(a,a+n);
    sort(b,b+n,greater<int>());
    for(int i=0;i<n;i++){
        if(a[i]+b[i]<k){
            flag=0;
            break;
        }
    }
        if(flag==1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
