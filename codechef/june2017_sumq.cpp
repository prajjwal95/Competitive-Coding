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
}*/
/*ll bsx(ll a[],int l,int r,int y)
{   //ll *b;
    //b=f(a,r,y);
    while(l<=r-1){
        int m=(l+r)/2;
        if(a[m]==y){
            return m;
        }
        if(a[m]<y){
            l=m+1;
        }
        else
            r=m-1;
    }
    return r;
}
ll bsz(ll c[],int l,int r,int y)
{
    //ll *b;
    //b=f(c,r,y);
     while(l<=r-1){
        int m=(l+r)/2;
        if(c[m]==y){
            return m;
        }
        if(c[m]<y){
            l=m+1;
        }
        else
            r=m-1;
    }
    return r;
}*/
ll floorSearch(ll arr[], int low, int high, int x)
{
    // If low and high cross each other
    if (low > high)
        return -1;

    // If last element is smaller than x
    if (x >= arr[high])
        return high;

    // Find the middle point
    int mid = (low+high)/2;

    // If middle point is floor.
    if (arr[mid] == x)
        return mid;

    // If x lies between mid-1 and mid
    if (mid > 0 && arr[mid-1] <= x && x < arr[mid])
        return mid-1;

    // If x is smaller than mid, floor must be in
    // left half.
    if (x < arr[mid])
        return floorSearch(arr, low, mid-1, x);

    // If mid-1 is not floor and x is greater than
    // arr[mid],
    return floorSearch(arr, mid+1, high, x);
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
        ll rx=floorSearch(a,0,p-1,b[i]);
        ll rz=floorSearch(c,0,r-1,b[i]);
        //cout<<rx<<rz<<endl;
        if(rx==-1||rz==-1)
                continue;
        for(int j=0;j<=rx;j++){
            for(int l=0;l<=rz;l++){
                sum=sum+((a[j]+b[i])*(b[i]+c[l]));
               // cout<<(a[j]+b[i])<<" "<<(b[i]+c[l])<<endl;
            }
        }
        }
        sum=sum%d;
        cout<<sum<<endl;
    }
}
