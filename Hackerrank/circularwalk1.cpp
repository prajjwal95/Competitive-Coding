#include <bits/stdc++.h>
#include <queue>
using namespace std;

int circularWalk(int n, int s, int t, int r_0, int g, int seed, int p){
    int a[n];
    queue<int> myqueue;
    int i;
    a[0]=r_0;
    for(i=1;i<n;i++){
        a[i]=(((a[i-1]*g)+seed)%p);
    }
    if(s==t){
        return 0;
    }
    if(a[s]==0){
        return -1;
    }
    i=s;
    int k=s,count=1;
    myqueue.push(s);
    int j=(i+a[i])%n;
do{
do{
    if(j!=s)
    myqueue.push(j);

    if(a[myqueue.front()]==0)
        myqueue.pop();
        if(a[myqueue.front()]>=abs(s-t))
            return count;
    if(j==0){
        j=n-1;
        continue;
    }
            j--;
}while(j>=((i-a[i]+n)%n));
count++;
i=myqueue.front();
myqueue.pop();
}while(myqueue.size()!=0);
return count;
}

int main() {
    int n;
    int s;
    int t;
    cin >> n >> s >> t;
    int r_0;
    int g;
    int seed;
    int p;
    cin >> r_0 >> g >> seed >> p;
    int result = circularWalk(n, s, t, r_0, g, seed, p);
    cout << result << endl;
    return 0;
}
