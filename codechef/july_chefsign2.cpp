#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        char s[1000000];
        cin>>s;
        int c=1,i=0,max=0,pos=0,flag=0;
        while(s[i]!='\0'){
            while(s[i]=='<'){
            if(flag==1){
                max=max > pos ? (max > c ? max : c) : (pos > c ? pos : c) ;
                c=1;
                flag=0;
                pos=0;
            }
                c++;
                i++;
                //cout<<"<"<<c<<endl;
                max=max > pos ? (max > c ? max : c) : (pos > c ? pos : c) ;
            }
            while(s[i]=='>'){
                if(flag==0){
                    pos=0;
                }
                pos++;
                flag=1;
                i++;
                max=max > pos ? (max > c ? max : c) : (pos > c ? pos : c) ;
            }
            if(pos>1)
                pos++;
            max=max > pos ? (max > c ? max : c) : (pos > c ? pos : c) ;
            while(s[i]=='='){
                if(flag==1){
                max=max > pos ? (max > c ? max : c) : (pos > c ? pos : c) ;
                flag=0;
                pos=0;
            }
             i++;
            }

        }
        cout<<max<<endl;
    }

    return 0;
}




