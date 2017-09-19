#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        long long co[26]={0};
        for(int i=0;i<26;i++)
            cin>>co[i];
        string s;
        cin>>s;
        int coo[26]={0};
        for(int i=0;i<s.length();i++){
            coo[s[i]-'a']++;
        }
        long long res=0;
        for(int i=0;i<26;i++){
            if(coo[i]==0)
                res+=co[i];
        }
        cout<<res<<endl;
    }
    return 0;

}
