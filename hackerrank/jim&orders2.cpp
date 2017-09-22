// case 7 not working
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
struct order
{
    int index;
    int ot;
    int dt;
    long sums=0;
};
bool compare(order lhs, order rhs) { return lhs.sums < rhs.sums; }
int main()
{
    int n;
    cin>>n;
    order o[n];
    for(int i=0;i<n;i++){
        cin>>o[i].ot>>o[i].dt;
        o[i].index=i+1;
    }
    for(int i=0;i<n;i++){
        o[i].sums=o[i].ot+o[i].dt;
    }
    sort(o,o+n,compare);
    for(int i=0;i<n;i++)
        cout<<o[i].index<<" ";
    cout<<endl;
    return 0;
}
