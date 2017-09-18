#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        string s;
        getline(cin,s);
        vector<int>a;
        int ii=0;
        while(!s.empty()){
                a.push_back(s[ii]);
                ii++;
        }
        int i,j;
        cin>>i;
        cin>>j;
        int x=0;
        while(x<=a.size()){
            a.erase(a.begin()+i+1,a.begin()+i+1+j);
            x=x+i;
        }
        for(int ii=0;ii<a.size();ii++)
            cout<<a[ii];
    }
    return 0;
}
