#include<bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
int length=0;
ll counts=0;
int flag=0;
string str="10";
unordered_set<string>hashset;
unordered_set<string>::iterator it =hashset.begin();
template <typename T>
  std::string NumberToString ( T Number )
  {
     std::ostringstream ss;
     ss << Number;
     return ss.str();
  }
ll cheffa(string s,int length)
{
    //static int debugs=0;
    string s1=s;
    for(auto i=0;i<length-1;i++){
            //cout<<i<<"i ";
        if(s[i]=='0'&&s[i+1]!='0'){
           // cout<<s<<" ";
            continue;}
        if(s[i]=='0'&&s[i+1]=='0'||s[i]!='0'&&s[i+1]=='0'){
           // cout<<s<<" ";
          i+=1;
           continue;}
        //if(debugs>=20)
         //   break;
        else{
            s[i]=s[i]-1;
            s[i+1]=s[i+1]-1;
            if(s[i+2]=='\0')
                s+='1';
            else if(s[i+2]=='9'){
                s.insert(i+2,str);
                s.erase(i+4,1);}
                else
                s[i+2]=s[i+2]+1;
       cout<<s<<"z ";
        it=hashset.begin();
        it=hashset.find(s);
        //cout<<s<<" ";
        if(it==hashset.end()){
            hashset.insert(s);
          // cout<<endl;
         //   for(it=hashset.begin();it!=hashset.end();it++)
          //      cout<<(*it)<<" ";
          //  cout<<endl;
            counts+=1;
            cout<<s<<"be ";
            counts=cheffa(s,s.length());
            s=s1;
           cout<<endl;
             cout<<s<<"af ";
        }
        else
        {
            s=s1;
            continue;
        }
        }
       // debugs++;

    }
    //cout<<counts<<" ";
    return (counts%mod);
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s="";
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            s+=NumberToString(a[i]);
        }
        length=s.length();
        hashset.insert(s);
        counts++;
        counts=cheffa(s,length);
        cout<<counts<<endl;
        counts=0;

    }
    return 0;
}
