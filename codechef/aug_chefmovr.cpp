#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        ll n,d;
        cin>>n>>d;
        ll a[n];
        ll sum=0,sums=0,dif=0;
        for(ll i=0;i<n;i++){
            cin>>a[i];
            sums+=a[i];
        }
        ll avg=0,res=0;
            avg=sums/n;
            for(ll i=0;i<(n-d);i++){
                /*if((a[i]-avg)<0){
                    dif+=abs(a[i]-avg);
                    cout<<dif<<"d ";
                    a[i+d]=a[i+d]-dif;
                }
                if((a[i]-avg)>0){
                    sum+=a[i]-avg;
                    cout<<sum<<"s ";
                    a[i+d]=a[i+d]+sum;
                }*/
                if(a[i]!=avg && (i+d)<n){
                    if(a[i]>avg){
                        a[i+d]+=a[i]-avg;
                        res+=a[i]-avg;
                        a[i]=avg;
                    }
                    else if(a[i]<avg){
                        a[i+d]-=avg-a[i];
                        res+=avg-a[i];
                        a[i]=avg;
                    }
                }
            }
            for(ll i=0;i<n;i++){
                   // cout<<a[i]<<" ";
                if(a[i]!=avg){
                    res=-1;
                    break;
                }
            }
            cout<<res<<endl;

    }
      return 0;
    }

