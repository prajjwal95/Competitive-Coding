#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t>=0){
        string s,n;
        getline(cin,s);
        n=s;
        int pos=0,count=0;
        for(int i=0;i<n.size();i++){
            pos++;
            if(count==0&&(i==n.size()-1)){
                n[i-pos+1]=toupper(n[i-pos+1]);
                for(int j=i-pos+2;j<n.size();j++)
                    n[j]=tolower(n[j]);
                cout<<n;
                pos=0;
            }
            if(count>0 &&(i==n.size()-1)){
                n[i-pos+1]=toupper(n[i-pos+1]);
                for(int j=i-pos+2;j<n.size();j++)
                    n[j]=tolower(n[j]);
                cout<<n.substr(i-pos+1,i);
                pos=0;
            }
            if(n[i]==' '){
                    count++;
               n[i-pos+1]=toupper(n[i-pos+1]);
               cout<<n[i-pos+1]<<". ";
               pos=0;
            }
        }
        cout<<endl;
        t--;
    }
    return 0;
}
