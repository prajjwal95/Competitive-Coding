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
        int r0=-1,r1=-1,res=0;
        for(int i=0;i<2;i++){
            for(int j=0;j<n;j++){
                cin>>a[i][j];
            }
        }
        for(int i=0;i<n;i++){
            if(a[0][i]=='*'&&a[1][i+1]=='*'&&a[0][i+2]=='*'){
                res+=1;
                a[1][i+1]='.';
            }
            else if(a[1][i]=='*'&&a[0][i+1]=='*'&&a[1][i+2]=='*'){
                res+=1;
                a[0][i+1]='.';
            }
        }

        for(int j=0;j<n;j++){
            if(a[0][j]=='*'){
                r0++;
            }
        }
        for(int j=0;j<n;j++){
            if(a[1][j]=='*'){
                r1++;
            }
        }
        res=res+max(r0,r1);
        for(int i=0;i<n;i++){
            if(a[0][i]=='*'&&a[1][i]=='*'){
                res+=1;
                break;
            }
        }
        cout<<res<<endl;
    }
    return 0;
}
