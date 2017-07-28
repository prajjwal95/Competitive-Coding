#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        string s;
        int cs=0,cm=0;
        cin>>s;
        for(int i=0;i<s.length();i++){
            if(s[i]=='s')
                cs+=1;
            if(s[i]=='m')
                cm+=1;
        }
        //cout<<cs<<" "<<cm<<endl;
        for(int i=0;i<s.length();i++){
            if(s[i]=='m'&&s[i-1]=='s'){
                cs-=1;
                s[i-1]='z';
            }
            else if(s[i]=='m'&&s[i+1]=='s'){
                cs-=1;
                s[i+1]='z';
            }

            }
        //cout<<cs<<" "<<cm<<endl;
        if(cs==cm)
            cout<<"tie"<<endl;
        else if(cs>cm)
            cout<<"snakes"<<endl;
        else
            cout<<"mongooses"<<endl;
    }
    return 0;
}
