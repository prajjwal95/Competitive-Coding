#include <stdio.h>
#include <stdlib.h>

void swap(int *x1, int *x2)
{
    int temp;
    temp = *x1;
    *x1= *x2;
    *x2 = temp;
}
int main()
{
    int t,i;
    int x1,y1,x2,y2,x3,y3,x4,y4;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
        scanf("%d%d%d%d",&x3,&y3,&x4,&y4);
        if(y1==y2 && y3==y4 && y2==y3)
        {
            if(x2<x1) swap(&x1,&x2);
            if(x4<x3) swap(&x3,&x4);
            if(x2>x3 && x1<x4) printf("yes\n");
            //else if( && ) printf("yes\n");
            else printf("no\n");
        }
        else if(x1==x2 && x3==x4 && x2==x3)
        {
            if(y2<y1) swap(&y1,&y2);
            if(y3>y4) swap(&y3,&y4);
            if(y2>y3 && y1<y4) printf("yes\n");
        //    else if(y1<y4 && y3<y2) printf("yes\n");
            else printf("no\n");
        }
        else if(x1==x3 && y1==y3) printf("yes\n");
        else if(x1==x4 && y1==y4) printf("yes\n");
        else if(x2==x3 && y2==y3) printf("yes\n");
        else if(x2==x4 && y2==y4) printf("yes\n");
        else printf("no\n");
    }
}
