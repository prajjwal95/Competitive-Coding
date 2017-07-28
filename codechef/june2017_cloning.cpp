#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;
        int A[n];
        for(int i=0;i<n;i++)
            cin>>A[i];
        while(q--){
            int a,b,c,d,k=0,k1=0;
            cin>>a>>b>>c>>d;
            a=a-1;
            b=b;
            c=c-1;
            d=d;
            vector<int>v1(A+a,A+b);
            vector<int>v2(A+c,A+d);
            sort(v1.begin(),v1.end());
            sort(v2.begin(),v2.end());
            while(k<v1.size()){
                if(v1[k]!=v2[k]){
                    k1++;
                }
                if(k1>1)
                    break;
                k++;
            }
            if(k1<=1)
                cout<<"YES"<<endl;
            else if(k1>1)
                cout<<"NO"<<endl;
        }
    }
    return 0;
}
