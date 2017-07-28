#include<iostream>
#include<algorithm>
#include <bits/stdc++.h>
#include <queue>
using namespace std;
int gcd(int a,int b);
//Function to left rotate arr[] of siz n by d
void leftRotate(int arr[], int d, int n) { int i, j, k, temp; for (i = 0; i < gcd(d, n); i++) { /* move i-th values of blocks */ temp = arr[i]; j = i; while(1) { k = j + d; if (k >= n) k = k - n; if (k == i) break; arr[j] = arr[k]; j = k; } arr[j] = temp; } }
//Fuction to get gcd of a and b/
int gcd(int a,int b) { if(b==0) return a; else return gcd(b, a%b); }
int circularWalk(int n, int s, int t, int r_0, int g, int seed, int p){ // Complete this function
    int A[n]; int visited[n] = {0} ; A[0] = r_0; if(s==t) return 0;
for(int i=1 ; i < n ; i++)
    {
        A[i] = ((A[i-1]* g) + seed)% p;
}
if(s !=0 )
    leftRotate(A,s,n);
 int s_new=0;
 t=t-s < 0 ? n+t -s  : t - s;
 s=0;
//cout << s << t << endl;
 //for(int i=0 ; i < n ; i++)
   //  cout << A[i] << "\t" ;
int l_range = -1 ,r_range=INT_MAX,l_range_max=n,r_range_max=0;
int k=0;
queue< pair<int,int> > q;
q.push(make_pair(0,k));
//for(int i=0 ; i < n ; i++)
    while(!q.empty())
    {
        int i = q.front().first;
         k=q.front().second;
        //cout << "k=" << k << endl;

        q.pop();
      //  if(i >  r_range )
        //    {
          //     return -1;
        //}
        if(visited[i])
            continue;
        if(A[i] >= n/2)
            {
                k++ ;
                break;
        }
        l_range = i - A[i] < 0 ? n-1+i+1 -A[i] : i - A[i] ;
        r_range = i+ A[i] % n ;

        // cout << l_range << endl << r_range ;
        visited[i]=1;

        if(l_range_max > l_range)
            {
                for(int j=l_range ; j < l_range_max ;j++)
                    {
                    if(!visited[j])
                        q.push(make_pair(j,k+1));
                }
                l_range_max=l_range;

        }
        if(r_range_max < r_range)
            {
            for(int j=r_range_max+1 ; j <= r_range ;j++)
                    {
                    if(!visited[j])
                        q.push(make_pair(j,k+1));
                }
            r_range_max=r_range;
        }


        if(s < t)
            {
            if(l_range < t)
                {
                k++;
                break;

            }
            if(r_range > t)
                {
                k++;
                break;

            }
        }
        else
            {
            if(l_range < t)
                {
                k++;
                break;

            }
            if(r_range > t)
                {
                k++;
                break;

            }

        }
    //min_chance++;

}

return k ;
}
int main() { int n; int s; int t; cin >> n >> s >> t; int r_0; int g; int seed; int p; cin >> r_0 >> g >> seed >> p; int result = circularWalk(n, s, t, r_0, g, seed, p); cout << result << endl; return 0; }
