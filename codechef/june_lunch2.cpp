#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR for(int i=0;i<n;i++)
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        ll c[n],w[n];
        FOR{
            cin>>c[i];
        }
        FOR
        {
            cin>>w[i];
        }
        vector<pair<ll , ll> >a;
        //vector<pair<ll , ll> >b;
        FOR
        {
            a.push_back(make_pair(c[i],w[i]));
        }
        sort(a.begin(),a.end());
       /* FOR
        {
            cout<<a[i].first<<" "<<a[i].second<<endl;
        }*/
        int k=0;
        for(int i=0;i<n-1;i++)
        {
            if(a[i].first!=a[i+1].first){
                a[k++]=a[i];
            }

        }
        a[k++]=a[n-1];
        ll sum=0;
        for(int i=0;i<k;i++)
        {
            sum+=a[i].second;
        }

        cout<<sum<<endl;

    }
    return 0;
}
