#include <bits/stdc++.h>
#define ll long long
using namespace std;
bool sorting(const std::pair<int, int> &a, const std::pair<int, int> &b) {
    if (a.first != b.first) {
      return a.first > b.first;
    }
    return a.second < b.second;
}
int main() {
    int n;
    int q;
    cin >> n >> q;
    vector<int> t(n);
    for(int t_i = 0; t_i < n; t_i++){
       cin >> t[t_i];
    }
    vector<int> p(n);
    for(int p_i = 0; p_i < n; p_i++){
       cin >> p[p_i];
    }
    vector<pair<int,int>>Ct;
    vector<pair<int,int>>Cp;
   // vector<pair<int,int>>Cp;
   // multimap<int,int>hasht;
   // multimap<int,int>hashp;
    for(int i=0;i<n;i++){
       Ct.push_back(make_pair(t[i],p[i]));
     //  Cp.push_back(make_pair(p[i],t[i]));
   }
   Cp=Ct;
    sort(Ct.begin(),Ct.end(),sorting);
    //sort(Cp.begin(),Cp.end(),sortingrev);

  //  sort(Cp.begin(),Cp.end(),sortinrev);
   // for(int i=0;i<n;i++){
   //     hasht.insert(make_pair(t[i],p[i]));
   //     hashp.insert(make_pair(p[i],t[i]));
   // }
    vector<pair<int,int>>::iterator iv=Ct.begin();
    vector<pair<int,int>>::iterator it=Cp.begin();
    vector<int> maxi;
   // multimap<int,int>::iterator itlow=hasht.begin(),ithi=hashp.begin(),it=hasht.begin();
    //for(auto iv=Ct.begin();iv!=Ct.end();iv++)
    //    cout<<(*iv).first<<" "<<(*iv).second<<endl;
   //  for(auto iv=Cp.begin();iv!=Cp.end();iv++)
    //    cout<<(*iv).first<<" "<<(*iv).second<<endl;
    for(int a0 = 0; a0 < q; a0++){
        int _type;
        int v;
        cin >> _type >> v;
        if(_type==1){
                it=Cp.begin();
            //if((*iv).second<v){
            //    cout<<"-1"<<endl;
            //    continue;
           // }
            //itlow=Cp.begin();
            while((*it).second<v&&it!=Cp.end()){
                    it++;
                    }
            if(it!=Cp.end()){
                cout<<(*it).first<<endl;
            }
            else
                cout<<"-1"<<endl;

    }
        if(_type==2){
            iv=Ct.begin();
           // itlow=Ct.begin();
            while((*iv).first>=v&&iv!=Ct.end()){
               // cout<<(*iv).first<<" "<<(*iv).second<<endl;
                maxi.push_back((*iv).second);
                iv++;
            }
            //cout<<(*iv).first<<" "<<(*iv).second<<endl;

          cout<<*max_element(maxi.begin(),maxi.end())<<endl;
        }
    }
    return 0;
}
