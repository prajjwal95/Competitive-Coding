#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int q;
    cin>>q;
    while(q--){
        int n;
        cin>>n;
        int arr[2*n][2*n];
        for(int i=0;i<2*n;i++){
            for(int j=0;j<2*n;j++){
                cin>>arr[i][j];
            }
        }
        int sum=0,max1,max2;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
               max1=max(arr[i][j],arr[i][2*n-1-j]);
               max2=max(arr[2*n-1-i][j],arr[2*n-1-i][2*n-1-j]);
               sum+=max(max1,max2);
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}
