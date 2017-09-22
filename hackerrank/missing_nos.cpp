#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n,m;
    int a[n],b[m];
    int ca[1001]={0};
    int cb[1001]={0};
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
        ca[a[i]]++;
    }
    cin>>m;
    for(int i=0;i<m;i++){
        cin>>b[i];
        cb[b[i]]++;
    }
    for(int i=0;i<10001;i++){
        if(ca[i]!=cb[i]){
            //cout<<ca[i]<<" "<<cb[i]<<" "<<i<<endl;
            int k=cb[i]-ca[i];
            cout<<cb[i]<<" "<<ca[i]<<" "<<k<<endl;
            //while(k--){
            //    cout<<i<<" ";
           // }
            cout<<endl;
        }
    }

    cout<<endl;
    return 0;
}
