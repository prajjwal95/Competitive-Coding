#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    vector<int> a;
    for(int i=1;i<500;i+=2){
        a.push_back(i);
    }
    while(t--){
        int n;
        cin>>n;
        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
