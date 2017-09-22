#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    int toys[n];
    for(int i=0;i<n;i++){
        cin>>toys[i];
    }
    sort(toys,toys+n);
    int k=1,k1=0;
    long res=0;
    while(k1<n){
        while(toys[k]-toys[k1]<=4){
            k++;
        }

        res++;
        k1=k;
        k=k1+1;
       // cout<<k<<k1<<res<<endl;
    }
    cout<<res<<endl;
    return 0;
}
