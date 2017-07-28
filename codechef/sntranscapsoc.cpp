#include<bits/stdc++.h>
using namespace std;
int calc(int n,int m,int a[][m],int thisPosX,int thisPosY)
{
int MIN_X=0,MIN_Y=0,MAX_X=n,MAX_Y=m;
int startPosX = (thisPosX - 1 < MIN_X) ? thisPosX : thisPosX-1;
int startPosY = (thisPosY - 1 < MIN_Y) ? thisPosY : thisPosY-1;
int endPosX =   (thisPosX + 1 > MAX_X) ? thisPosX : thisPosX+1;
int endPosY =   (thisPosY + 1 > MAX_Y) ? thisPosY : thisPosY+1;
int maxi=a[startPosX][startPosY];
for (int i=startPosX; i<=endPosX; i++) {
    for (int j=startPosY; j<=endPosY; j++) {
       if(a[i][j]>maxi){
        maxi=a[i][j];
       }
    }
}
if(maxi>a[thisPosX][thisPosY])
return maxi;
else
    return a[thisPosX][thisPosY];
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,m,t1=0;
        cin>>n>>m;
        int a[n][m],b[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>a[i][j];
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                b[i][j]=a[i][j];
            }
        }
        int flag=0;
        do{
        int this_posx=0,this_posy=0,k=0,l=0;
        for(int i=0;i<n;i++){
                this_posx=i;
            for(int j=0;j<m;j++){
                this_posy=j;
                b[i][j]=calc(n,m,a,this_posx,this_posy);
            }
        }
        for(k=0;k<n;k++){
            for(int l=0;l<m;l++){
                if(b[k][l]!=b[0][0])
                    break;
            }
        }
        if(k==n&&l==m)
            flag==1;
        t1+=1;
        }while(flag==0);
    }
    return 0;
}
