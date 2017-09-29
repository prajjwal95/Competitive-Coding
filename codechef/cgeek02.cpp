#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int cr=0,cl=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='R'&&s[i+1]!='R')
                cr++;
            if(s[i]=='L'&&s[i+1]!='L')
                cl++;
        }
        cout<<min(cr,cl)<<endl;
    }
}
