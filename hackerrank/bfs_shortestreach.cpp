#include <bits/stdc++.h>

using namespace std;
#define maxs 1002
int main() {
    int q;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        int n;
        int m;
        cin >> n >> m;
        vector <int>adj[maxs];
        int dis[maxs]={-1};
        int visited[maxs]={0};
        for(int a1 = 0; a1 < m; a1++){
            int u;
            int v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        int s;
        cin >> s;
        queue <int> q;
        q.push(s);
        dis[s]=0;
        while(!q.empty()){
            int ver=q.front();
            //cout<<ver<<"he"<<endl;
            visited[ver]=1;
           // cout<<adj[ver].size()<<endl;
            //cout<<adj[ver][0]<<" "<<adj[ver][1]<<endl;
            for(int i=0;i<adj[ver].size();i++){
                if(visited[adj[ver][i]]!=1){
                    q.push(adj[ver][i]);
                    dis[adj[ver][i]]=dis[ver]+6;
                    visited[adj[ver][i]]=1;
                }
            }
            q.pop();
        }
        for(int i=1;i<=n;i++){
            if(i!=s){
            if(dis[i]==0)
                cout<<"-1 ";
            else
            cout<<dis[i]<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
