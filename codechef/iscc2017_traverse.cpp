#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        ll m,x=0,y=0;
        int count=0,flag=0;
        cin>>m;
        while(m--){
            if(m%3==0){
                x++;
            }
            else
                y++;
        }
        cout<<x<<" "<<y<<endl;
    }
    return 0;
}
