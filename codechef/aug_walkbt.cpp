#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll res=1;
string dectobin(int r,int n)
{
    int k;
    string s;
    for(int c=n-1;c>=0;c--){
        k=r>>c;
        if(k&1)
            s+='1';
        else
            s+='0';
    }
    return s;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
            res=1;
        int n,q;
        ll x=0;
        cin>>n>>q;
        vector<string>vec;
        int i=0;
        while(q>=0){
        int flags=0;
        string c;
        getline(cin,c);
        if(c[0]=='!'){
            int C=c[2]-'0';
            int pos=0;
            x=(ll)(x%(ll)pow(2,n))+((ll)(pow(2,C))%(ll)pow(2,n));
          //  cout<<pow(2,C)<<" "<<pow(2,n)<<endl;
          //  cout<<x<<endl;
            string s=dectobin(x,n);
           // cout<<s<<endl;
            if (find(vec.begin(),vec.end(),s)==vec.end()){
            vec.push_back(s);
            flags=1;
            sort(vec.begin(),vec.end());
            }
           // for(int i=0;i<vec.size();i++)
           //     cout<<vec[i]<<" ";
           // cout<<endl;
            //cout<<vec.size()<<endl;
            if(flags==1){
            if(vec.size()==1){
                res+=n;
                flags=0;
            }
            else
            {
                pos=0;
                int k=0;
                flags=0;
                int flag=0;
                //if(vec.size()>2)
                //vec.erase(std::remove(vec.begin(), vec.end(), s), vec.end());
                for(int i=0;i<vec.size();i++){
                        //if(s==vec[i])
                        //vec.erase(std::remove(vec.begin(), vec.end(), s), vec.end());
                    if(s==vec[i]){
                        k=i;
                        break;
                    }
                }
              //  cout<<vec.size()<<endl;
               // cout<<k<<endl;
               // cout<<vec[k]<<"k"<<endl;
                for(int j=0;j<n;j++){
                        //cout<<"hello"<<endl;
                       // cout<<vec[i][j]<<" "<<vec[i+1][j]<<endl;
                       if(k>0&&k<(vec.size()-1)){
                        if((vec[k-1][j]!=s[j])&&(vec[k+1][j]!=s[j])){
                         //   cout<<j<<"j ";
                            pos=j;
                         //   cout<<pos<<endl;
                            flag=1;
                            break;
                        }
                       /* if(vec[k+1][j]!=s[j]){
                            pos=j;
                            cout<<pos<<endl;
                            flag=1;
                            break;
                        }*/
                       }
                       else if(k==0){
                        if(vec[k+1][j]!=s[j]){
                            pos=j;
                           // cout<<pos<<"O"<<endl;
                            flag=1;
                            break;
                        }
                       }
                        else if(k=vec.size()-1){
                        if(vec[k-1][j]!=s[j]){
                            pos=j;
                           // cout<<pos<<"si"<<endl;
                            flag=1;
                            break;
                        }
                       }
                }
                //if(pos!=0&&(vec[i][pos])!=(vec[i+1][pos]))
                    res+=n-pos;
                    //cout<<res<<endl;
                }
            }
        }
        if(c[0]=='?'){
            cout<<res<<endl;
        }
    q--;
        }
    }
        return 0;
}

