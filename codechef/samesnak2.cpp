#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t>0){
        long int x11,x12,y11,y12,x21,x22,y21,y22;
        int m1,m2;
        bool u=false,d=false;
       cin>>x11>>y11>>x12>>y12;
       cin>>x21>>y21>>x22>>y22;
       if(x11>x12){
            swap(x11,x12);
       }
       if(x21>x22){
        swap(x21,x22);
       }
       if(y11>y12){
        swap(y11,y12);
       }
       if(y21>y22){
        swap(y21,y22);

       }
            if(((x12-x11)!=0&&(x21-x22)!=0)&&(y11==y21)){
                m1=(y12-y11)/(x12-x11);
                m2=(y22-y21)/(x22-x21);
                if(m1==m2){
                        d=true;
                    if(((x21>=x11&&x21<=x12)||(x22>=x11&&x22<=x12))||((x11>=x21&&x11<=x22)||(x12>=x21&&x12<=x22))){
                        u=true;
                    }
                }
            }
            if((y12-y11)!=0&&(y21-y22)!=0&&(x11==x21)){
                        d=true;
                    if(((y21>=y11&&y21<=y12)||(y22>=y11&&y22<=y12))||((y11>=y21&&y11<=y22)||(y12>=y21&&y12<=y22))){
                        u=true;
                    }
            }
            if((x12-x11)!=0&&(x21-x22)==0){
                if(((x21==x11)&&(y21==y11))||((x21==x12)&&(y21==y12))||((x22==x11)&&(y22==y11))||((x22==x12)&&(y22==y12)))
                {
                    u=true;
                    d=true;
                }
            }
            if((x12-x11)==0&&(x21-x22)!=0){
                if(((x11==x21)&&(y11==y21))||((x11==x22)&&(y11==y22))||((x12==x21)&&(y12==y21))||((x12==x22)&&(y12==y22)))
                {
                    u=true;
                    d=true;
                }
            }
            if(((x11==x12)&&(y11==y12))&&((x21!=x22)||(y21!=y22))){
                if((x11>=x21&&x11<=x22)&&(y11>=y21&&y11<=y22)){
                    u=true;
                    d=true;
                }
            }
            if(((x21==x22)&&(y21==y22))&&((x11!=x12)||(y11!=y12))){
                if((x21>=x11&&x21<=x12)&&(y21>=y11&&y21<=y12)){
                    u=true;
                    d=true;
                }
            }
            if((x11==x12)&&(y11==y12)&&(x21==x22)&&(y21==y22)&&(x11==x21)&&(y11==y21))
            {
                u=true;
                d=true;
            }
            if(u&&d){
                cout<<"yes"<<endl;
            }
            else
                cout<<"no"<<endl;
                t--;
    }

return 0;
}

