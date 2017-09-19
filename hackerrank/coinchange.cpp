#include <bits/stdc++.h>

using namespace std;

long getWays(long n, vector < long > c){
    long T[n+1]={0};
    T[0]=1;
    for(int i=0;i<c.size();i++){
        for(int j=c[i];j<=n;j++){
            T[j]+=T[j-c[i]];
            //cout<<T[j]<<j<<endl;
        }
    }
    return T[n];
}

int main() {
    int n;
    int m;
    cin >> n >> m;
    vector<long> c(m);
    for(int c_i = 0; c_i < m; c_i++){
       cin >> c[c_i];
    }
    long ways = getWays(n, c);
    cout<<ways<<endl;
    return 0;
}
