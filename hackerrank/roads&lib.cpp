#include <bits/stdc++.h>
using namespace std;
vector<int>adj[100001];
int visited[100001]={0};
int c=0;

void dfs(int source){
    visited[source]=1;
    c+=1;
    for(int i=0;i<adj[source].size();i++){
        int fo=adj[source][i];
        if(visited[fo]!=1)
            dfs(fo);
    }
}
int main() {
    int q;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        int n;
        int m;
        long c_lib;
        long c_road;
        cin >> n >> m >> c_lib >> c_road;
        for (int i = 0; i <= n; i++){
            visited[i] =0;
            adj[i].clear();
        }
        for(int a1 = 0; a1 < m; a1++){
            int city_1;
            int city_2;
            cin >> city_1 >> city_2;
            adj[city_1].push_back(city_2);
            adj[city_2].push_back(city_1);
        }
        long long res=0;
        for(int i=1;i<=n;i++){
            if(visited[i]!=1){
                c=0;//no. of connected components
                dfs(i);
                res+=c_lib;
                res+=(c-1)*c_road;

            }
        }
        cout<<min(res,(long long)(c_lib*n))<<endl;
    }
    return 0;
}
