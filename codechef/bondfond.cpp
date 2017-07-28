#include<bits/stdc++.h>
using namespace std;
 long long int compare( long long int a, long long int b, long long int c)
{
    return a<b?(a<c?a:c):(b<c?b:c);
}
int main()
{

    int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        long long int k=0;
        if(n!=1){
        while(pow(2,k)<n){
            k++;
        }}
        cout<<k<<endl;
         long long int res=compare(abs(n-pow(2,k-1)),abs(n-pow(2,k)),abs(n-pow(2,k+1)));
        cout<<res<<endl;
    }
    return 0;
}
