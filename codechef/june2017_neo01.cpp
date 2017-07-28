#include<bits/stdc++.h>
#define ll long long
using namespace std;
int maxSubArraySum(int a[], int size)
{
    int max_so_far = INT_MIN, max_ending_here = 0,s=0, start =0, end = 0;
       static ll sum=0;
    for (int i=0; i< size; i++ )
    {
        max_ending_here += a[i];

        if (max_so_far < max_ending_here)
        {
            max_so_far = max_ending_here;
            start = s;
            end = i;
        }

        if (max_ending_here < 0)
        {
            max_ending_here = 0;
            s = i+1;
        }
    }
    sum=sum+((max_so_far)*(end-start));
    int b[100000],n1=0;
    for(int i=0;i<start;i++){
        b[i]=a[i];
        n1++;
    }
    for(int i=end+1;i<size;i++){
        b[i]=a[i];
        n1++;
    }
    maxSubArraySum(b,n1);
    return sum;
}

/*Driver program to test maxSubArraySum*/
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
            ll sum=maxSubArraySum(a,n);
        cout<<sum<<endl;
    }
    return 0;
}
