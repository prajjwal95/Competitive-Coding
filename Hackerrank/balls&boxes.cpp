#include <bits/stdc++.h>

using namespace std;

int main() {
    int n,i=0,j=0;
    int m;
    cin >> n >> m;
    int A[n];
    for(int A_i = 0; A_i < n; A_i++){
       cin >> A[A_i];
    }
    int C[m];
    for(int C_i = 0; C_i < m; C_i++){
       cin >> C[C_i];
    }
    int z=n*m;
    int Z[z],p=0;
   int B[n][m],D[n][m];
    for(int B_i = 0;B_i < n;B_i++){
       for(int B_j = 0;B_j < m;B_j++){
          cin >> B[B_i][B_j];
       }
    }
    for(i = 0;i<n;i++){
       for(j = 0;j < m;j++){
          D[i][j]=B[i][j];
       }
    }
    int max=D[0][0],max1=C[0];
    int k=0,l=0,candy=0,candy1=0,f=0,e=0;
    while(candy>=candy1){
            candy1=candy;
            max=D[0][0];
            /*for(int ii=0;ii<m;ii++){
                if(C[ii]>max1){
                    max1=C[ii];
                    e=ii;
                }
            }*/
    for(i = 0;i<n;i++){
       for(j = 0;j < m;j++){
          if(D[i][j]>=max){
            max=D[i][j];
            k=i;
            l=j;
          }
       }
    }
    A[k]--;
    f++;
    candy=candy+D[k][l];
    if(A[k]<=0){
    D[k][l]=0;
    }
    Z[p]=(C[l]-f);
    if(D[k][l]==0){
         f=0;
         p++;
    }
    for(int q=0;q<p;q++){
        if(Z[q]<0)
        candy=candy-(Z[q]*Z[q]);
    }
}
cout<<candy1<<endl;
    return 0;
}
