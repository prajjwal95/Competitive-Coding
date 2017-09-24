#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int c=0;
    for(int i=0;i<n;i++){
        int x,y,z;
        cin>>x>>y>>z;
        if(x=1&&y==1&&z==1||x==1&&y==1||x==1&&z==1||z==1&&y==1)
            c++;
    }
    cout<<c<<endl;
}
