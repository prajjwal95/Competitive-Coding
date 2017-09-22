#include<bits/stdc++.h>
using namespace std;
int main(){
multimap<int,int> maps;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
    int a,b;
    cin>>a>>b;
    maps.insert(make_pair(a+b,i+1));
    }

   for(multimap<int,int >::iterator me=maps.begin();me!=maps.end();me++ )
    {
       cout<<me->second<<" ";
    }
return 0;
}
