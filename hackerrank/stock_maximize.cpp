#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int arr_i = 0; arr_i < n; arr_i++){
           cin >> arr[arr_i];
        }
        long profit=0;
        int maxi=INT_MIN;
        for(int i=arr.size()-1;i>=0;i--){
            maxi=max(maxi,arr[i]);
            profit+=maxi-arr[i];
        }
        cout<<profit<<endl;
    }
    return 0;
}
