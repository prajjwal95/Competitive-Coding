#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,h;
    cin>>n>>h;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    vector<int> moves;
    int mov;
    cin>>mov;
    while(mov!=0){
        moves.push_back(mov);
        cin>>mov;
    }
    int crane=0,cur=0;
    for(int i=0;i<moves.size();i++){
        mov=moves[i];
        if(mov==1&&cur!=0){
            cur--;
        }
        else if(mov==2&&cur<n-1){
            cur++;
        }
        else if(mov==3&&crane==0&&a[cur]>0){
           crane=1;
           a[cur]--;
        }
        else if(mov==4&&crane==1&&a[cur]<h){
            crane=0;
            a[cur]++;
        }
    }
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    return 0;
}
