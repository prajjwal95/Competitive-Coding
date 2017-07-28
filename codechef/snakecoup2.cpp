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
        int h=0,res=0,k=0;
        for(int i=0;i<2;i++){
            for(int j=0;j<n;j++){
                cin>>a[i][j];
            }
        }
        for(int j=0;j<n;j++){
                if(a[0][j]=='*'&&a[0][j+1]!='*'&&a[1][j+1]!='*'){
                    k=1;
                }
            if(a[0][j]=='*'&&(a[0][j+1]=='*'||a[1][j+1]=='*')){
                v[j]=1;
                if(v[j-1]==0&&k==1){
                    v[j-1]=1;
                    k=0;
                }
            }
            if(a[0][n-1]=='*'&&k==1)
                v[n-2]=1;
            if(h==0){
                if(a[0][j]=='*'&&a[1][j]=='*')
                    h=1;
            }
            }
        for(int j=0;j<n;j++){
                 if(a[0][j]=='*'&&a[0][j+1]!='*'&&a[1][j+1]!='*'){
                    k=1;
                }
            if(a[1][j]=='*'&&(a[1][j+1]=='*'||a[0][j+1]=='*')&&v[j]==0){
                v[j]=1;
                if(v[j-1]==0&&k==1){
                    v[j-1]=1;
                    k=0;
                }
            }
            if(a[1][n-1]=='*'&&k==1)
                v[n-2]=1;
            if(h==0){
                if(a[0][j]=='*'&&a[1][j]=='*')
                    h=1;
            }
        }
        for(int i=0;i<n-1;i++){
            res+=v[i];
        }
        res+=h;

        cout<<res<<endl;
    }
    return 0;
}

