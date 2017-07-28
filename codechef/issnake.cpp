#include<iostream>
#include<bits/stdc++.h>
# define siz 500
using namespace std;
/*bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.second < b.second);
}*/
bool operators(const pair<int,int> &p1, const  pair<int,int> &p2)
    {
        if(p1.second < p2.second) return true;
        if(p1.second == p2.second) return p1.first < p2.first;
        return false;
    }
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        char c[2][n];
        for(int i=0;i<n;i++){
            cin>>c[0][i];
        }
            cout<<endl;
        for(int i=0;i<n;i++){
            cin>>c[1][i];
        }
        vector< pair<int,int> >myqueue1;
        for(int i=0;i<2;i++){
            for(int j=0;j<n;j++){
                if(c[i][j]=='#')
                    c[i][j]='1';
                    else
                        c[i][j]='0';
            }
        }
        bool graph[2][n];
            for(int i=0;i<2;i++){
            for(int j=0;j<n;j++){
                graph[i][j]=c[i][j]-'0';
            }
        }
        for(int i=0;i<n;i++){
                if(graph[0][i]!=0)
            myqueue1.push_back(make_pair(0,i));
        }
        for(int i=0;i<n;i++){
                if(graph[1][i]!=0)
            myqueue1.push_back(make_pair(1,i));
        }
        sort(myqueue1.begin(), myqueue1.end(), operators);
        int k1=0,l1=0;
        for(int i=0;i<n;i++){
            if(graph[0][i]==1){
                k1=0;
                l1=i;
                break;
            }
        }
        for(int i=0;i<l1;i++){
            if(graph[1][i]==1){
                k1=1;
                l1=i;
                break;
            }
        }
        int k2=0,l2=0;
        for(int i=n-1;i>=0;i--){
            if(graph[0][i]==1){
                k2=0;
                l2=i;
                break;
            }
        }
         for(int i=n-1;i>l2;i--){
            if(graph[1][i]==1){
                k2=0;
                l2=i;
                break;
            }
        }

        vector< pair<int,int> >myqueue;
        myqueue.push_back(make_pair(k1,l1));
        graph[k1][l1]=0;
        while(l1<=l2){
            if(k1==0&&graph[1][l1]==1){
                myqueue.push_back(make_pair(1,l1));
                k1=1;
                graph[1][l1]=0;
                continue;
            }
            if(k1==0&&graph[0][l1+1]==1){
                    if(l1+1<=l2){
                myqueue.push_back(make_pair(0,l1+1));
                l1+=1;
                graph[0][l1]=0;

            }}
            if(k1==1&&graph[1][l1+1]==1){
                    if(l1+1<=l2){
                myqueue.push_back(make_pair(1,l1+1));
                l1+=1;
                graph[1][l1]=0;
                    }
            }
            if(k1==1&&graph[0][l1]==1){
                myqueue.push_back(make_pair(0,l1));
                k1=0;
                graph[0][l1]=0;
                continue;
            }
            if(k1==0&&graph[1][l1]==0&&graph[0][l1+1]==0)
               break;
            if(k1==1&&graph[0][l1]==0&&graph[1][l1+1]==0)
                break;
        }
        sort(myqueue.begin(), myqueue.end(), operators);
        /* for(vector< pair<int,int> >::iterator dx=myqueue1.begin();dx!=myqueue1.end();dx++){
        cout<<dx->first<<" "<<dx->second<<endl;
       }
       cout<<endl;
       cout<<endl;
       for(vector< pair<int,int> >::iterator dx=myqueue.begin();dx!=myqueue.end();dx++){
        cout<<dx->first<<" "<<dx->second<<endl;
       }*/
        if(myqueue1==myqueue)
            cout<<"yes";
        else
            cout<<"no";
    }
    return 0;
}

