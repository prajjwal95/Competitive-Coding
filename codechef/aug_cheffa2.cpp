#include<bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
int length=0;
ll counts=0;
int flag=0;
string str="10";
deque<string>hashset;
deque<string>::iterator it =hashset.begin();
//unordered_set<string>::iterator itt =hashset.begin();
template <typename T>
  std::string NumberToString ( T Number )
  {
     std::ostringstream ss;
     ss << Number;
     return ss.str();
  }
int cheffa(string s)
{
    while(!hashset.empty()){
            string s=hashset.front();
            hashset.pop_front();
        string s1=s;
        //cout<<s<<endl;
        for(int i=0;i<s.length()-1;i++){
                 string s=s1;
            if((s[i]-'0')*(s[i+1]-'0')==0)
                continue;
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
        //cout<<s<<"s ";
        it = find(hashset.begin(),hashset.end(),s);
        if(it==hashset.end()){
            hashset.push_back(s);
            //cout<<s<<"be ";
          // cout<<endl;
           //  cout<<s<<"af ";
        }
        else
        {
            s=s1;
            continue;
        }
        }
    }
    counts+=1;
    }
    return counts%mod;
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
        hashset.push_front(s);
        //counts++;
        //cout<<counts<<endl;
        counts=cheffa(s);
        cout<<counts<<endl;
        counts=0;

    }
    return 0;
}
