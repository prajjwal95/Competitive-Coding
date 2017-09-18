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
ll cheffa(vector<int> a)
{
    //static int debugs=0;
    for(auto i=0;i<a.size()-1;i++){
            string s;
            vector<int>b;
            b=a;
            //cout<<i<<"i ";
        if(a[i]*a[i+1]==0)
            continue;
        //if(debugs>=20)
         //   break;
        else{
            a[i]=a[i]-1;
            a[i+1]=a[i+1]-1;
            if((i+2)>=a.size())
                a.push_back(1);
            else
                a[i+2]=a[i+2]+1;
            for(int j=0;j<a.size();j++){
            s+=NumberToString(a[j]);
        }
       //cout<<s<<"z ";
        it=hashset.begin();
        it=hashset.find(s);
        cout<<s<<" ";
        if(it==hashset.end()){
            hashset.insert(s);
           cout<<endl;
         //   for(it=hashset.begin();it!=hashset.end();it++)
          //      cout<<(*it)<<" ";
          //  cout<<endl;
            counts+=1;
            cout<<s<<"be ";
            counts=cheffa(a);
            a=b;
           cout<<endl;
             cout<<s<<"af ";
        }
        else
        {
            a=b;
            continue;
        }
        }
       // debugs++;

    }
    //cout<<counts<<endl;
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
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
            s+=NumberToString(a[i]);
        }
        hashset.insert(s);
        counts++;
        counts=cheffa(a);
        cout<<counts<<endl;
        counts=0;

    }
    return 0;
}
