#include<bits/stdc++.h>
#define ll long long
using namespace std;
bool sortbysecdesc(const tuple<ll,ll,ll> &a,const tuple<ll,ll,ll> &b)
{
       return (get<2>(a)>get<2>(b));
}
ll finding(ll fday,vector<ll>&lec)
{
    ll high,low,mid,res=0;
     high=lec.size()-1;
     low=0;
    if(fday>lec[high])
        return -1;
    while(low<=high){
        mid=(low+high)/2;
        if(lec[mid]<fday)
            low=mid+1;
        else{
            res=mid;
            high=mid-1;
        }
    }
    return res;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        ll n,d,dd,td,si,days,day;
        cin>>n>>d;
        vector<tuple<ll,ll,ll>>prof;
        //vector<ll>ddi;
        ll sad=0;
        vector<tuple<ll,ll,ll>>::iterator it;
        for(int i=0;i<n;i++){
          cin>>dd>>td>>si;
          //ddi.push_back(dd);
          prof.push_back(make_tuple(dd,td,si));
        }
        sort(prof.begin(),prof.end(),sortbysecdesc);
        vector<ll>lecd;
        for(int i=0;i<n;i++)
            lecd.push_back(i);
        for(int i=0;i<n;i++){
            days=lecd.size();
            if(days==0){
                for(it=prof.begin()+i;it!=prof.end();it++)
                    sad+=(get<1>(*it))*(get<2>(*it));
                break;
            }
            it=prof.begin()+i;
            ll fd=get<0>(*it);
            ll tday=get<1>(*it);
            day=finding((fd-1),lecd);
            if(day!=-1){
                ll rem=lecd.size()-day;
                if(rem>=tday)
                {
                    for(int k=(day-1);k<(day+tday-1);k++)
                        lecd.erase(lecd.begin()+k);
                    tday=0;
                }
                else
                {
                    for(int k=(day+tday-1);k<(lecd.size()-1);k++)
                        lecd.erase(lecd.begin()+k);
                    tday=tday-rem;
                }
            }
            sad+=((get<2>(*it))*tday);
        }
        cout<<sad<<endl;

    }
    return 0;
}
