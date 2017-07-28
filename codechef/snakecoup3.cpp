#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        char a[2][n];
        int v[n-1]={0};
        int h=0,res=0;
        int r0[n]={0}
        int r1[n]={0};
        for(int j=0;j<n;j++){
                cin>>a[0][j];
                if(a[0][j]=='*')
                    r0[j]=1;
        }
        for(int j=0;j<n;j++){
                cin>>a[1][j];
                if(a[1][j]=='*')
                    r1[j]=1;
        }
        for(int i=0;i<n;i++){
            sum0+=r0[i];
            sum1+=r1[i];
        }


        cout<<res<<endl;
    }
    return 0;
}

