
#include <bits/stdc++.h>

using namespace std;
int main() {
    int n;
    cin >> n;
    int i=0;
    for(i=0;i<n;i++){
        int j=1,k=1;
        while(j<n)
        {
            while(k<n){
                if((j+1)*(j+1)==(i+1)*(k+1))
                    cout<<i<<" "<<j<<" "<<k<<" "<<endl;
                    k++;
            }
            j++;
        }
    }
    return 0;
}
