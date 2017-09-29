#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        ll n1=n;
        ll n2=n1;
        int flag=0,flags=0,check=0;
        int c[10]={0};
        ll k=2;
        while(flag==0){
            flag=1;
            if(check==1){
            n2=n1;
            check=0;
            }
            int d=n1%10;
            if(c[d]!=1)
                c[d]=1;
            n1=n1/10;
            for(int i=0;i<10;i++){
                if(c[i]==0){
                    flag=0;
                    break;
                }
            }
            if(n1==0&&flag==0){
            n1=k*n;
            check=1;
            k++;
            }
           // cout<<n1<<" "<<n2<<endl;
        if(n2==n1){
            flags=1;
            break;
        }
    }
    if(flags==1)
        cout<<"INSOMNIA"<<endl;
    else
        cout<<n2<<endl;
    }
}
