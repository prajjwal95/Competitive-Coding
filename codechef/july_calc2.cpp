#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll n,b,nn,cal1,cal2,cal3,f=0,res=0;
        cin>>n>>b;
        nn=n-(n%b);
        f=n%b;
        //find the middle three terms to get maximum value required
        cal1=((n%b)+(b*(((n/b)/2)-1)))*((n/b)-(((n/b)/2)-1));
        cal2=((n%b)+(b*(((n/b)/2))))*((n/b)-((n/b)/2));
        cal3=((n%b)+(b*(((n/b)/2)+1)))*((n/b)-(((n/b)/2)+1));
        //cout<<cal1<<" "<<cal2<<" "<<cal3<<endl;
        res = cal1 > cal2 ? (cal1 > cal3 ? cal1 : cal3) : (cal2 > cal3 ? cal2 : cal3) ;
        cout<<res<<endl;
    }
    return 0;
}
