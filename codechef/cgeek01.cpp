#include <bits/stdc++.h>
using namespace std;

void lro(int arr[], int n)
{
  int i, temp;
  temp = arr[0];
  for (i = 0; i < n-1; i++)
     arr[i] = arr[i+1];
  arr[i] = temp;
}
void lr(int arr[], int d, int n)
{
  int i;
  for (i = 0; i < d; i++)
    lro(arr, n);
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        string s;
        cin>>s;
        int c=0,co=0;
        for(int i=0;i<s.length();i++){
            if(co==3)
            break;
            if(s[i]=='1')
                co++;
            c++;
        }
        //cout<<c<<" "<<co<<endl;
        lr(a,c,n);
        int pos=0;
        cin>>pos;
        cout<<a[pos-1]<<endl;
    }
}
