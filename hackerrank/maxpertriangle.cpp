#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    int l[n];
    for(int i=0;i<n;i++)
        cin>>l[i];
    sort(l,l+n,greater<int>());
    int k=0;
    while(k<n){
        if((l[k+2]+l[k+1])>l[k])
            break;
        else
            k++;
    }
    if(k+2<n)
    cout<<l[k+2]<<" "<<l[k+1]<<" "<<l[k]<<endl;
    else
        cout<<"-1"<<endl;
    return 0;
}
