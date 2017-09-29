#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[]={-10,70,-80,1,100,85};
    int pos1=0,pos2=0,min=INT_MAX;
    sort(a,a+6);
    for(int i=0;i<6;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    int l=0,r=5;
    while(l<r){
            //cout<<a[l]+a[r]<<endl;
        if(abs(a[l]+a[r])<abs(min)){
            min=a[l]+a[r];
            pos1=l;
            pos2=r;
            //cout<<a[pos1]<<" "<<a[pos2]<<endl;
        }
        if(a[l]+a[r]<0)
            l++;
        else
            r--;
    }
    cout<<a[pos1]<<" "<<a[pos2]<<endl;
}
