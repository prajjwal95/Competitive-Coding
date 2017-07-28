#include<bits/stdc++.h>
#define ll long long
using namespace std;
vector<int> graph[100000];
bool visited[100000]={false};
ll int a[100001];
ll int par[100001];
//vector<vector<ll>> cal(100000);
ll int cal[10000][10000];
void bfs(ll int s)
{   for(int j=0;j<100000;j++)
    visited[j]=false;
ll int k,i;
queue<ll int> q;
visited[s]=true;
q.push(s);
while(!q.empty())
{
k=q.front();
//cout<<k<<" "<<endl;
q.pop();
for(i=0;i<graph[k].size();i++)
{
    //if(k==d)
      //  break;
//cout<<k<<" is parent of"<<graph[k][i]<<" "<<endl;
if(!visited[graph[k][i]])
{par[graph[k][i]]=k;
//cout<<par[graph[k][i]]<<" "<<graph[k][i]<<endl;
q.push(graph[k][i]);
visited[graph[k][i]]=true;
}
}
}
}
main()
{
ios_base::sync_with_stdio(false);
ll int t;
cin>>t;
/*for(int i=0;i<100000;i++)
    cal[i].resize(100000);
for(int i=0;i<100000;i++){
    for(int j=0;j<100000;j++){
        cal[i][j]=0;
    }
}*/
while(t--){
ll int n,q,p,i,j,k,x,y,res=0,c;
cin>>n;
//for(i=1;i<=n;i++)
//cin>>a[i];
for(i=1;i<n;i++)
{ cin>>x>>y>>c;
graph[x].push_back(y);
graph[y].push_back(x);
cal[x][y]=c;
cal[y][x]=c;

}
ll int s,m,d;
vector <tuple<ll,ll,ll>> W;
cin>>m;
while(m--){
//cout<<"insert source"<<endl;
cin>>s>>d>>k;
W.push_back(make_tuple(s,d,k));
}
vector <tuple<ll,ll,ll>>::iterator it;
for(it=W.begin();it!=W.end();it++){
s=get<0>(*it);
d=get<1>(*it);
k=get<2>(*it);
res=0;
par[s]=0;
bfs(s);
//for(i=1;i<=n;i++)
//cout<<par[i]<<" "<<endl;
//cout<<" insert destination "<<endl;
//cin>>d;
//cout<<d<<"-->";
//if(cal[d][par[d]]<=k)
//res=cal[d][par[d]];
//cout<<res<<"rr ";
//cout<<d<<"-->";
//int xx=0;
while(d!=s)
{
//cout<<par[d]<<"--> ";
//cout<<cal[d][par[d]]<<endl;;
if(cal[d][par[d]]<=k){
if(res==0)
    res=cal[d][par[d]];
else
    res=res^cal[d][par[d]];
    }
d=par[d];
//cout<<res<<"r ";
//xx++;
//if(xx==3)
  //  break;
}
cout<<res<<endl;
}
}
}

