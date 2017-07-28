#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,maxa,maxb,maxi,flag=0,res=0;
    int mapa[10000]={0};
    int mapb[10000]={0};
    cin>>n;
    vector<int>A(n);
    vector<int>B(n);
    for(int i=0;i<n;i++){
        cin>>A[i];
        maxa=max(maxa,A[i]);
        mapa[A[i]]++;
    }
    for(int i=0;i<n;i++){
        cin>>B[i];
        maxb=max(maxb,B[i]);
        mapb[B[i]]++;
    }
    maxi=max(maxa,maxb);
    //sort(A.begin(),A.end(),greater<int>());
    //sort(B.begin(),B.end(),greater<int>());
    for(int i=maxi;i>=2;i--){
            int c1=0,c2=0,a=1,b=1,sums=0;
            bool flag=false;
            //int aa=a;
            //int bb=b;
        for(int j=i;j<=maxi;j=j+i){
            c1+=mapa[j];
            if(c1>=1&&j>a){
                a=j;
                cout<<a<<" ";
            }
            c2+=mapb[j];
            if(c2>=1&&j>b){
                    b=j;
                    cout<<b<<" ";
            }
             if(c1+c2>=2 && c1>=1 && c2>=1){
                flag = true;
                break;
            }
        }
        if(flag==true){
            res=a+b;
            break;
        }
    }
    cout<<res;
    return 0;
}
