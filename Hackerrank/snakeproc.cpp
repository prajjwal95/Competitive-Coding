#include<iostream>
using namespace std;
int main()
{
    int r,l,flag=1;
    cin>>r;
    while(r--){
    flag=1;
    cin>>l;
    string s,s1;
    cin>>s;
    for(int i=0;i<l;i++){
            if(s[i]=='H'){
                s1=s1+"H";
            }
            if(s[i]=='.')
                continue;
                if(s[i]=='T')
                    s1=s1+"T";
    }
    if(s1[0]=='H'){
            flag=1;
            for(int i=0;i<s1.length();i+=2){
            if(s1[i]!='H'||s1[i+1]!='T'){
                flag=0;
                break;
            }
        }
    if(flag==0){
         cout<<"Invalid"<<endl;
    }
    else
         cout<<"Valid"<<endl;
    }
     if(s1[0]=='T'){
        cout<<"Invalid"<<endl;
    }
    if(s1==""){
        cout<<"Valid"<<endl;
    }
    }
    return 0;
}
