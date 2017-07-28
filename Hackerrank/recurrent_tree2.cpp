#include<bits/stdc++.h>
using namespace std;
#define siz 200005
# define INF 0x3f3f3f3f
#define ll long long
typedef pair<int, int> iPair;
int visited[siz];
ll f=0,g=0;
vector<int>c(siz,0);
class Graph
{
    public:
    int V;    //vertices
    list<pair<int,int>> *adj;//array containing adjacency lists
    Graph(int V);  // Constructor
    void addEdge(int v,int w,int c);
    void shortestPath(int s);
    //void isReachable(int s, int d);
    //void DFSUtil(int v, bool visited[]);
    //void DFS(int v);
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
int fsum(int root)
{
    if(root<=1){
        return 1;
    }
    else
        return fsum(root-1)+fsum(root-2);
}
/*void Graph::DFSUtil(int v, bool visited[])
{
    ll g=0;
    // Mark the current node as visited and print it
    visited[v] = true;
    //cout << v << " ";
    for(int i=0;i<V;i++){
        if(visited[i]==true){
            g+=c[i];
            cout<<i<<" ";
        }

    }
    cout<<endl;
    cout<<g<<" ";
    f+=fsum(g);
    // Recur for all the vertices adjacent to this vertex
    list<int>::iterator i;
    for (i = adj[v].begin(); i != adj[v].end(); ++i)
        if (!visited[*i])
            DFSUtil(*i, visited);
}

// DFS traversal of the vertices reachable from v.
// It uses recursive DFSUtil()
void Graph::DFS(int v)
{
    // Mark all the vertices as not visited
    bool *visited = new bool[V];
    for (int i = 0; i <V; i++)
        visited[i] = false;

    // Call the recursive helper function to print DFS traversal
    DFSUtil(v, visited);
    cout<<f;
}*/
void Graph::shortestPath(int src)
{
    // Create a priority queue to store vertices that
    // are being preprocessed. This is weird syntax in C++.
    // Refer below link for details of this syntax
    // http://geeksquiz.com/implement-min-heap-using-stl/
    priority_queue< iPair, vector <iPair> , greater<iPair> > pq;
    //cout<<"prior"<<endl;
    // Create a vector for distances and initialize all
    // distances as infinite (INF)
    vector<int> dist(V, INF);

    // Insert source itself in priority queue and initialize
    // its distance as 0.
    pq.push(make_pair(0, src));
    dist[src] = c[src];
    //cout<<"hello"<<endl;
    /* Looping till priority queue becomes empty (or all
      distances are not finalized) */
    while (!pq.empty())
    {
        // The first vertex in pair is the minimum distance
        // vertex, extract it from priority queue.
        // vertex label is stored in second of pair (it
        // has to be done this way to keep the vertices
        // sorted distance (distance must be first item
        // in pair)
        int u = pq.top().second;
        pq.pop();
        //cout<<"pop"<<endl;
        // 'i' is used to get all adjacent vertices of a vertex
        list< pair<int, int> >::iterator i;
        for (i = adj[u].begin(); i != adj[u].end(); ++i)
        {
            // Get vertex label and weight of current adjacent
            // of u.
            int v = (*i).first;
            //int weight = (*i).second;
            int weight =c[v];
            //cout<<"for"<<endl;
            //  If there is shorted path to v through u.
            if (dist[v] > dist[u] + weight)
            {
                // Updating distance of v
                dist[v] = dist[u] + weight;
                pq.push(make_pair(dist[v], v));
                //cout<<"if"<<endl;
            }
        }
    }

    // Print shortest distances stored in dist[]
    //printf("Vertex   Distance from Source\n");
    for (int i = 0; i < V; ++i){
        g=dist[i];
        f+=fsum(g);
        //printf("%d \t\t %d\n", i, dist[i]);
    }
}
int main()
{
    int n;
    cin>>n;
    //vector<pair<int ,int>>graph[siz];
    int x,y;
    Graph g(n);
    for(int i=0;i<n-1;i++){
        cin>>x>>y;
        g.addEdge(x-1,y-1,0);
    }
    for(int i=0;i<n;i++){
        cin>>c[i];

    }
     /*list<int>::iterator ii;
        for(int j=0;j<n;j++){
            for(ii=g.adj[j].begin();ii!=g.adj[j].end();ii++){
                cout<<(*ii)<<"  ";
            }
            cout<<endl;
        }*/
   // list<pair<int,int>>::iterator i;
    //for(int j=0;j<n;j++){
            //cout<<"h ";
     //for(i=g.adj[j].begin();i!=g.adj[j].end();i++){
       // (*i).second=c[j];
        //+c[(*i).first];
        //cout<<"is ";

for(int i=0;i<n;i++)
    g.shortestPath(i);
cout<<f;
return 0;
}
