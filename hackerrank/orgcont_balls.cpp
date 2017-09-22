#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    int q;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        int n;
        cin >> n;
        int a[n]={0};
        int b[n]={0};
        int in;
        for(int M_i = 0;M_i < n;M_i++){
           for(int M_j = 0;M_j < n;M_j++){
                cin>>in;
                a[M_i]+=in;//no of balls in each container
                b[M_j]+=in;//no of balls of each type
              // cout<<a[M_i]<<" "<<b[M_j]<<endl;
           }
        }
        int visited[n]={0};//to check if that container is visited
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                //cout<<a[i]<<" "<<b[j]<<endl;
                if(a[i]==b[j]&&visited[i]==0){
                   // cout<<i<<" "<<j<<" "<<endl;
                    visited[i]=1;
                    break;
                }
            }
        }
        int flag=0;
        for(int i=0;i<n;i++){
            if(visited[i]!=1){
                flag=1;
                break;
            }
        }
        if(flag==0)
            cout<<"Possible"<<endl;
        else
            cout<<"Impossible"<<endl;
    }
    return 0;
}
