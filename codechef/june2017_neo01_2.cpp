#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*int maxSubArraySum(int a[], int size)
{
    int max_so_far = INT_MIN,max_element=INT_MIN, max_ending_here = 0,s=0, start =0, end = 0;
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
        //max_ending_here = max(max_ending_here + array[i], 0);
   // max_so_far      = max(max_ending_here, max_so_far);
    max_element     = max(max_element, array[i]);
    if (max_so_far == 0{
    max_so_far = max_element;
  s=i;
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
*/
int maxSubArraySum(int array[],int n){
     /* Empty array */
     if(n==0)
        return 0;

     int arrayLength = n;
     /* Current maximum sum including the current value */
     int sum1 = array[0];
     /* Current maximum sum excluding the current value */
     int sum2 = 0,sum3=0,k=1,sum11=0;

     /* Iterate through the array from second element to the end */
     for(int i = 1; i  <  arrayLength; i++){

         /* Current maximum sum excluding the current index value */
         sum3 = max(sum1,sum2);
         if(sum1>sum2){
            sum3=sum1;
         }
         else
            sum3=sum2;
         /* Move the value of sum3 into sum2 */
         sum2 = sum3;

         /* Current maximum sum including the current index value */
         sum11 = sum2 + array[i];
         if((sum11*k)>(sum1*k)){
         k++;
         array[i]=0;
         sum1=sum11;
         }
     }

     /* Return the maximum of sum1 and sum2 */
     int m=max((sum1*k), (sum2*k));
     if(m==0){
        int sumz=0;
        for(int i=0;i<n;i++){
            sumz+=array[i];
            //cout<<"abshdbh"<<array[i];
        }
        array[0]=0;
        return sumz;
     }
     array[0]=0;
     return m;
 }
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,n1,k=0;
        ll sum=0;
        cin>>n;
        n1=n;
        int a[n],b[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            b[i]=a[i];
        }
            while(n1!=0){
              for(int i=0;i<n1;i++){
                a[i]=b[i];
        }
            sum+=maxSubArraySum(a,n1);
         /* for(int i=0;i<n1;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;*/
            for(int i=0;i<n1;i++){
                if(a[i]!=0){
                    b[k]=a[i];
                    k++;
                }
            }
            n1=k;
            k=0;
            }
        cout<<sum<<endl;
    }
    return 0;
}
