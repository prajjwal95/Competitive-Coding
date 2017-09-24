#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,a,k=0,l=0;
    cin>>n>>m>>a;
    k=n/a;
    l=m/a;
    if(n%a)
        k++;
    if(m%a)
        l++;
    cout<<k*l<<endl;
}
