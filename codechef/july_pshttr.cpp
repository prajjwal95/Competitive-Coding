#include<bits/stdc++.h>
#define ll long long
using namespace std;
class Graph
{
    public:
    int V;    //vertices
    list<pair<int,int>> *adj;//array containing adjacency lists
    Graph(int V);  // Constructor
    void addEdge(int v, int w,int c);
    void isReachable(int s, int d,int k);
};

Graph::Graph(int V)
{
    this->V = V;
    adj = new list<pair<int,int>>[V];
}

void Graph::addEdge(int v, int w,int c)
{
    adj[v].push_back(make_pair(w,c));//Add element w to list with header v
    adj[w].push_back(make_pair(v,c));//Add element v to list with header w
    //undirected graph
}
void Graph::isReachable(int u,int v,int k)
{   list<pair<int,int>>::iterator j;
    cout<<u<<" "<<v<<endl;
    j=adj[u].begin();
    ll res=0;
    //Base
    if(u==v){
        if((*j).second<=k){
                if(res==0)
                res=(*j).second;
            else
            res=res^(*j).second;
        }
    }
    //all vertices marked not visited
    bool *visited=new bool[V];
    for(int i=0;i<V;i++)
        visited[i]=false;
    list<int>queue;
    visited[u]=true;
    queue.push_back(u);
    list<pair<int,int>>::iterator i;
    while(!queue.empty()){
        u=queue.front();
        queue.pop_front();
        for(i=adj[u].begin();i!=adj[u].end();i++){
            if((*i).first==v){
            if((*i).second<=k){
                    if(res==0)
                    res=(*i).second;
            else
            res=res^((*i).second);
            }
            //cout<<res<<" ";
            }
            if(!visited[(*i).first]){
                /*if((*i).second<=k){
                    if(res==0)
                    res=(*i).second;
                else
            res=res^((*i).second);
            }*/
                //cout<<res<<" ";
                visited[(*i).first]=true;
                cout<<(*i).first<<"r  ";
                queue.push_back((*i).first);
            }
        }
    }
    cout<<"hel"<<res<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        ll n,u,v,c,m,k;
        cin>>n;
       Graph g(n);
       int x=0;
        for(int i=0;i<(n-1);i++){
            cin>>u>>v>>c;
            g.addEdge(u-1,v-1,c);
            x++;
            cout<<x<<endl;
        }
         list<pair<int,int>>::iterator ii;
        for(int j=0;j<n;j++){
            for(ii=g.adj[j].begin();ii!=g.adj[j].end();ii++){
                cout<<(*ii).first<<","<<(*ii).second<<"  ";
            }
            cout<<endl;
        }
        cin>>m;
        while(m--){
            cin>>u>>v>>k;
            g.isReachable(u-1,v-1,k);
        }
    }
}
