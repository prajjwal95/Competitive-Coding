#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        string s,s1;
        int flag=0;
        s1="";
        int co[26]={0};
        cin>>s;
        for(int i=0;i<s.length();i++){
            co[s[i]-'a']++;
        }
        for(int i=0;i<s.length();i++){
            if(co[s[i]-'a']>1)
                {
                    flag=1;
                    cout<<"yes"<<endl;
                    break;
                }
        }
        if(flag==0)
            cout<<"no"<<endl;
    }
    return 0;
}
