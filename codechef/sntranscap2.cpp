#include<bits/stdc++.h>
using namespace std;
int calc(vector<vector<int>>&a,int thisPosX,int thisPosY)
{
int MIN_X=0,MIN_Y=0,MAX_X=a.size()-1,MAX_Y=a[0].size()-1;
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
/*bool sorti(vector<vector<int>>&b)
{
    bool flag;
    for(int i=0;i<b.size();i++){
        sort(b[i].begin(),b[i].end());
    }
    for(int i=0;i<b.size();i++){
        if(b[i].begin()!=b[i].end()&&b[i].begin()!=b[i+1].begin())
            return false;
    }
    return true;
}*/
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,m,t1=0,z=0;
        cin>>n>>m;
        vector<vector<int>> a(n,vector<int> (m));
        vector<vector<int>> b(n,vector<int> (m));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>a[i][j];
            }
        }
        int maxis=a[0][0];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                b[i][j]=a[i][j];
                if(a[i][j]>maxis)
                    maxis=a[i][j];
            }
        }
        vector<vector<int>> d(n,vector<int> (m,maxis));
        vector<vector<int>> c(n,vector<int> (m));
        int this_posx=0,this_posy=0;
        while(b!=d){
                z++;
                /*for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                a[i][j]=b[i][j];
            }
        }*/
        for(int i=0;i<n;i++){
                this_posx=i;
            for(int j=0;j<m;j++){
                this_posy=j;
                if(z%2!=0){
                b[i][j]=calc(a,this_posx,this_posy);
                c[i][j]=b[i][j];
                }
                if(z%2==0){
                    b[i][j]=calc(c,this_posx,this_posy);
                    a[i][j]=b[i][j];
                }
            }
        }

       /*for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cout<<b[i][j]<<" ";
            }
            cout<<endl;
        }*/
        t1+=1;
    }
    cout<<t1<<endl;
    }
    return 0;
}
