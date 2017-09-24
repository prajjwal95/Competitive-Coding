#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n,k;
    cin>>n>>k;
    int a[n+1];
    for(int i=1;i<n+1;i++)
        cin>>a[i];
    int pos=a[k];
    sort(a+1,a+n+1,greater<int>());
    int l=1,c=0;
    while(a[l]!=0&&a[l]>=pos){
        c++;
        l++;
    }
    cout<<c<<endl;
}
