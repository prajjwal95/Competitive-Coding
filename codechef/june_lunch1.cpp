#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    while(t--){
        ll a,b,n;
        int res=0;
        cin>>a>>b>>n;
        if(n%2==0){
            if(a>=b)
               res=a/b;
               else
                res=b/a;
        }
        if(n%2!=0){
            if((a*2)>b){
                res=(a*2)/b;
            }
            else
                res=b/(a*2);
        }
        cout<<res<<endl;

    }

return 0;
}
