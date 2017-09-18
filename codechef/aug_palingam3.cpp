#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int uA=0,uB=0;
        string s,t;
        cin>>s;
        cin>>t;
        int c1[26]={0};
        int c2[26]={0};
        char Z='Z';
        for(int i=0;i<s.length();i++){
            c1[s[i]-'a']++;
        }
        for(int i=0;i<t.length();i++){
            c2[t[i]-'a']++;
        }
        for(int i=0;i<26;i++){
            if(c1[i]!=0&&c2[i]==0)
                uA=max(uA,c1[i]);
            if(c2[i]!=0&&c1[i]==0)
                uB=max(uB,c2[i]);
        }
        if(uA==0)
            Z='B';
        else if(uA>=2)
            Z='A';
        else{
            if(uB==0)
                Z='A';
            else
                Z='B';
        }
        cout<<Z<<endl;
    }
    return 0;
}
