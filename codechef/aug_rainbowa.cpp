#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        int flag=1;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<(n/2);i++){
                if(a[n/2]!=7){
                    flag=0;
                    break;
                }
            if(a[i]!=a[n-i-1]||a[i]<1||a[i]>7||a[n-i-1]<1||a[n-i-1]>7){
                flag=0;
                break;
            }
        }
        if(flag==0)
            cout<<"no"<<endl;
        if(flag==1)
            cout<<"yes"<<endl;
    }
    return 0;
}
