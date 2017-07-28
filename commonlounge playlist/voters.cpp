#include<bits/stdc++.h>
using namespace std;
#define siz 1000000
int main()
{
    int n1,n2,n3,k,count=0;
    cin>>n1>>n2>>n3;
    int n=n1+n2+n3;
    int a[siz];
    for(int i=0;i<siz;i++)
        a[i]=0;
    while(n--){
        cin>>k;
        a[k]++;
    }
    for(int i=0;i<siz;i++)
    {
        if(a[i]>1)
            count++;
    }
    cout<<count<<endl;
    for(int i=0;i<siz;i++)
    {
        if(a[i]>1)
            cout<<i<<endl;
    }
    return 0;
}
