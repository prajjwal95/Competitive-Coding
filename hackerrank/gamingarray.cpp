#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    int g;
    cin >> g;
    for(int a0 = 0; a0 < g; a0++){
        int n,f=0;
        cin >> n;
        vector<int>A(n);
        int maxi=0,c=0;
        for(int i=0;i<n;i++){
            cin>>A[i];
            if(maxi<A[i]){
                maxi=A[i];
                c++;
            }
        }
        string res=(c%2==0)?"ANDY":"BOB";
        cout<<res<<endl;

    }
    return 0;
}
