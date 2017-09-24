#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,q;
    cin>>n;
    unordered_map<string,int>hashi;
    unordered_map<string,int>::iterator it,it1;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        it=hashi.find(s);
        if(it==hashi.end())
        hashi.insert(make_pair(s,1));
        else
            it->second++;
    }
    //for(it=hashi.begin();it!=hashi.end();it++)
    //    cout<<it->first<<" "<<it->second<<endl;
    cin>>q;
    for(int i=0;i<q;i++){
        string s1;
        cin>>s1;
        it1=hashi.find(s1);
        if(it1==hashi.end())
            cout<<"0"<<endl;
        else
            cout<<it1->second<<endl;

    }
    return 0;
}
