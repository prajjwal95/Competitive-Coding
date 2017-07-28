#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll N,D,res=0;
        cin>>N>>D;
        vector<ll>d(N);
        vector<ll>t(N);
        vector<ll>s(N);
        vector<ll>s1(N);
        for(int i=0;i<N;i++)
            cin>>d[i]>>t[i]>>s[i];
        for(int i=0;i<N;i++){
            s1[i]=s[i]*t[i];
            res+=s1[i];
            //cout<<s1[i]<<" ";
        }
       // cout<<endl;
        vector<int>a(N);
        int co=1;
        while(co<=D){
                //s1.erase(remove(s1.begin(),s1.end(),0),s1.end());
                //t.erase(remove(t.begin(),t.end(),0),t.end());
                if(res==0)
                    break;
                ll min=LONG_MAX,index=0;
                int count=0;
                for(int i=0;i<N;i++){
                        if(t[i]!=0){
                    if(min>d[i]){
                        min=d[i];
                        index=i;
                        count=0;
                        a[count++]=i;
                    }
                    else if(min==d[i]){
                        a[count++]=i;
                        }
                    }
                }
                    if(min>co){
                            co++;
                        continue;
                    }
                if(count<=1){
                        //cout<<"hello ";
                    t[index]--;
                    d[index]++;
                    s1[index]=s1[index]-s[index];
                }
                if(count>1){
                    //cout<<"hellomi ";
                    int maxa,indexa=0;
                    maxa=LONG_MIN;
                    for(int i=0;i<count;i++){
                        if(maxa<s[a[i]]){
                            maxa=s[a[i]];
                            indexa=a[i];
                    }
                    d[a[i]]++;
                }
                t[indexa]--;
                s1[indexa]=s1[indexa]-s[indexa];
        }
        for(int i=0;i<N;i++){
            s1[i]=s[i]*t[i];
            //cout<<s1[i]<<" ";
        }
        //cout<<endl;
        a.clear();
        co++;
    }
    ll res1=0;
    for(int i=0;i<N;i++)
        res1+=s1[i];
    cout<<res1<<endl;
}
return 0;
}
