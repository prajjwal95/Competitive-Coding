#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int minsalary[n+1],offeredsalary[m+1],maxjoboffers[m+1],maxjobofferscopy[m+1];
        int qual[n+1][m+1];
        ll res1=0,res2=0,res3=0,res1c=0,res2c=0;
        int flag=0;
        for(int i=1;i<=n;i++)
            cin>>minsalary[i];
        for(int i=1;i<=m;i++){
            cin>>offeredsalary[i]>>maxjoboffers[i];
            maxjobofferscopy[i]=maxjoboffers[i];
        }
        char s[n+1][m+1];
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                cin>>s[i][j];
            }
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                qual[i][j]=s[i][j]-'0';
            }
        }

         for(int i=1;i<=n;i++){
                ll salary=0,res1c=0,res2c=0,flag=0;
            for(int j=1;j<=m;j++){
                if(qual[i][j]!=0){
                    if(offeredsalary[j]>salary){
                    if(maxjobofferscopy[j]>0&&offeredsalary[j]>=minsalary[i]){
                        //res1++;
                        res1c=1;
                        res2c=offeredsalary[j];
                        flag=j;
                        salary=offeredsalary[j];
                    }
                     //cout<<res1c<<" "<<res2c<<" "<<flag<<" "<<salary<<endl;
                }
            }
            }
            res1+=res1c;
            res2+=res2c;
            maxjobofferscopy[flag]--;
            //cout<<res1<<" "<<res2<<endl;
        }
        for(int i=1;i<=m;i++){
            if(maxjoboffers[i]==maxjobofferscopy[i])
                res3++;
        }
        cout<<res1<<" "<<res2<<" "<<res3<<endl;

    }
    return 0;
}
