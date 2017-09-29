#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n);
        int j=0,k=n-1,flag=0;
        while(j<k){
            if(a[j]+a[k]==m)
            {
                flag=1;
                break;
            }
            else if(a[j]+a[k]<m)
            {
                j++;
            }
            else if(a[j]+a[k]>m)
            {

                k--;
            }
        }
        if(flag==1)
            cout<<"yes"<<endl;
        else if(flag==0)
            cout<<"no"<<endl;
    }
}
