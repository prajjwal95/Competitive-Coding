#include <bits/stdc++.h>

using namespace std;
int GetRightPosition(vector<int>& A, int l, int r, int key)
{
    int m;

    while( r - l > 1 )
    {
        m = l + (r - l)/2;

        if( A[m] <= key )
            l = m;
        else
            r = m;
    }

    return l;
}

// Input: Indices Range (l ... r]
// Invariant: A[r] >= key and A[l] > key
int GetLeftPosition(vector<int>& A, int l, int r, int key)
{
    int m;

    while( r - l > 1 )
    {
        m = l + (r - l)/2;

        if( A[m] >= key )
            r = m;
        else
            l = m;
    }

    return r;
}

int CountOccurances(vector<int>& A, int size, int key)
{
    // Observe boundary conditions
    int left = GetLeftPosition(A, -1, size-1, key);
    int right = GetRightPosition(A, 0, size, key);

    // What if the element doesn't exists in the array?
    // The checks helps to trace that element exists
    return (A[left] == key && key == A[right])?
           (right - left + 1) : 0;
}
/*int bins(int d[],int k,int e,int l)
{
    int r=k-1,m;
    while(l<=r){
        m=(l+r)/2;
        if(e==d[m])
            return(m);
        else if(e>d[m])
                l=m+1;
            else
                r=m-1;
    }
    return -1;
}
*/
int geometricTrick(string s,int n){
   int i=0,count=0;
    int a[n],b[n],c[n];
    int n1=0,n2=0,n3=0;
    for(i=0;i<n;i++){
       if(s[i]=='a'){
           a[n1]=i;
           n1++;
       }
        else if(s[i]=='b'){
            b[n2]=i;
            n2++;
        }
        else{
            c[n3]=i;
            n3++;
        }
    }
      long int n4=n1*n3;
      vector<int> d(n4);
     int n33=0;
     long int k=0;
    for(i=0;i<n1;i++){
        n33=0;
        while(n33<n3&&k<n4){
            d[k]=(a[i]+1)*(c[n33]+1);

            k++;
            n33++;
        }
    }

    sort(d.begin(),d.end());
    /*for(int j=0;j<k;j++)
        cout<<d[j]<<endl;
        */
     for(i=0;i<n2;i++){
        b[i]=((b[i]+1)*(b[i]+1));
       // cout<<"\t";
        //cout<<b[i]<<endl;
    }
    sort(b,b+n2);
    int res=0;
    for(i=0;i<n2;i++){
            res=CountOccurances(d,n4,b[i]);
            if(res!=0)
                count=res+count;
            }
            return count;
    }


int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int result = geometricTrick(s,n);
    cout << result << endl;
    return 0;
}

