#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll candies(int n, vector <int> arr) {
    vector<ll>left(n,1);
    vector<ll>right(n,1);
    for(int i=1;i<n;i++){
        if(arr[i]>arr[i-1]){
            left[i]=left[i-1]+1;
        }
         //cout<<left[i]<<endl;
    }
   // cout<<"blank"<<endl;
    for(int i=n-2;i>=0;i--){
        if(arr[i]>arr[i+1])
            right[i]=right[i+1]+1;
       // cout<<right[i]<<endl;
    }
    ll candy=0;
    for(int i=0;i<n;i++)
     candy+=max(left[i],right[i]);
    return candy;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0; arr_i < n; arr_i++){
       cin >> arr[arr_i];
    }
    ll result = candies(n, arr);
    cout << result << endl;
    return 0;
}
