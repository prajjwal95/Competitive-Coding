#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
        int n,q,i,k,l,r,x;
        cin>>n>>q;
        int a[n+1];
        for(int j=1;j<=n;j++)
            cin>>a[j];
        int ch;
        while(q--){
        //for(int j=1;j<=n;j++)
        //cout<<a[j]<<" ";
        //cout<<endl;
        cin>>ch;
        if(ch==1){
            cin>>i>>k;
             int z=1,c=1,pos=i;
            for(int j=i;c<=k;){
                if(a[j]<a[j+z]&&j<=n&&(j+z)<=n){
                    j=j+z;
                    c++;
                    z=1;
                }
                 if(a[j]>=a[j+z]&&z<=100&&j<=n&&(j+z)<=n){
                    z++;
                }
                 if(z>100||c>k||j>n||(j+z)>n){
                    pos=j;
                    break;
                }
            }
            cout<<pos<<endl;
        }
        if(ch==2){
            cin>>l>>r>>x;
            for(int j=l;j<=r;j++){
                a[j]=a[j]+x;
        }
        }
    }
    return 0;
}
