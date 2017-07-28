#include<bits/stdc++.h>
#define ll long long
#define d 1000000007
using namespace std;
/*ll * f(ll a[],int r,int y)
{
    for(int i=0;i<r;i++){
        if(a[i]<=y)
            a[i]=0;
        if(a[i]>y)
            a[i]=1;
    }
    return a;
}
ll bsx(ll a[],int l,int r,int y)
{   ll *b;
    b=f(a,r,y);
    while(l<=r){
        int m=(l+r)/2;
        if(a[m]<=y)
            l=m+1;
        else
            r=m;
    }
    return l;
}
ll bsz(ll c[],int l,int r,int y)
{
    ll *b;
    b=f(c,r,y);
     while(l<=r){
        int m=(l+r)/2;
        if(c[m]<=y)
            l=m+1;
        else
            r=m;
    }
    return l;
}*/
int bs(ll de[],int y,int r)
{
    int l=0;
    while(de[l]<=y&&l<=r){
        l++;
    }
    return l-1;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        ll p,q,r;
        cin>>p>>q>>r;
        ll a[p],b[q],c[r];
        for(int i=0;i<p;i++){
            cin>>a[i];
        }
        for(int i=0;i<q;i++){
            cin>>b[i];
        }
        for(int i=0;i<r;i++){
            cin>>c[i];
        }
        sort(a,a+p);
        sort(b,b+q);
        sort(c,c+r);
        ll sum=0;
        for(int i=0;i<q;i++){
        //ll rx=bsx(a,0,p-1,b[i]);
        //ll rz=bsz(c,0,r-1,b[i]);
        //cout<<rx<<rz<<endl;
        ll rx=bs(a,b[i],p);
        ll rz=bs(c,b[i],r);
        if(rx==-1||rz==-1)
                continue;
                cout<<rx<<rz<<endl;
        for(int j=0;j<=rx;j++){
            for(int l=0;l<=rz;l++){
                sum=sum+((a[j]+b[i])*(b[i]+c[l]));
               cout<<(a[j]+b[i])<<" "<<(b[i]+c[l])<<endl;
            }
        }
        }
        sum=sum%d;
        cout<<sum<<endl;
    }
}
