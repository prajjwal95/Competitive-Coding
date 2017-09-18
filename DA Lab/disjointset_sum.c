#include <stdio.h>
#include <math.h>
void power(int set[],int n,int sum)
{
    int psize=pow(2,n);
    int c,i,j;
    /*int total[psize][n];
    for(i=0;i<psize;i++){
        for(j=0;j<n;j++){
            total[i][j]=-1;
        }
    }*/
    int set1[n];
    int set2[n];
    int pos[n];
    int p=0;
     for(j=0;j<n;j++){
            set1[j]=-1;
            set2[j]=-1;
        }
    int sum1=0,sum2=0;
    int k=0,l=0,flag=0;
    for(c=0;c<pow(2,n);c++){
            sum1=0;
            sum2=0;
            k=0;
            l=0;
            flag=0;
    for(j=0;j<n;j++){
        if(c&(1<<j)){
            //printf("%s",(1<<j));
            //total[c][j]=set[j];
            //sum1+=total[c][j];
            set1[k]=set[j];
            printf("%d %d\n",set[j],j);
            pos[p]=j;
            p++;
            sum1+=set1[k];
            k++;
        }
        if(sum1==sum/2)
        {
            flag=1;
            break;
        }
    }
    if(flag==1){
       i=0,l=0,j=0;
       for(i=0;i<p;i++)
        printf("%d ",pos[i]);
       for(i=0;i<n;i++){
        if(pos[l]==i&&pos[l]!=0)
            l++;
        else
            {
                set2[j]=set[i];
                j++;
            }
        }
       printf("SET1\n");
       i=0;
       while(i<k&&set1[i]!=-1){
        printf("%d ",set1[i]);
        i++;
       }
       printf("\n");
       i=0;
       printf("SET2\n");
       while(i<j&&set2[i]!=-1){
        printf("%d ",set2[i]);
        i++;
       }
      /* while(i<n||set2[i]!=-1){
        printf("%d ",set2[i]);
        i++;
       }*/
        break;
    }

    }
}
int main()
{
    int n,i;
    scanf("%d",&n);
    int set[n];
    int sum=0;
    for(i=0;i<n;i++){
        scanf("%d",&set[i]);
        sum+=set[i];
    }
    if(sum%2!=0)
        printf("-1");
    else
    power(set,n,sum);
}
