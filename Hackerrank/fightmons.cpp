#include <bits/stdc++.h>

using namespace std;

int getMaxMonsters(int n, int hit, int t,int h[]){
    sort(h,h+n);
    int i=0,c=0;
    while(t>0){
        h[i]=h[i]-hit;
        if(h[i]<=0){
            i++;
            c+=1;
        }
        t--;
    }
    return c;
}

int main() {
    int n;
    int hit;
    int t;
    cin >> n >> hit >> t;
    int h[n];
    for(int h_i = 0; h_i < n; h_i++){
       cin >> h[h_i];
    }
    int result = getMaxMonsters(n, hit, t, h);
    cout << result << endl;
    return 0;
}
