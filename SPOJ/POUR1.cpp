#include<iostream>
using namespace std;
int gcd(int x,int y)
{   if(y!=0)
    return gcd(y,x%y);
    else
        return x;
}
int gcda(int a,int b,int c,int x,int y)
{
    int count=0;
    while(a!=c&&b!=c){
    if(a==0){
        a=x;
    }
    else if(b==y){
        b=0;
    }
    else
    {
        b=b+a;
        a=0;
        if(b>y){
            a=b-y;
            b=y;
        }
    }
    count++;
    }
    return count;
}
int main()
{
    int a,b,c,x,y,t,a_f,b_f,res;
    cin>>t;
    while(t--){
        cin>>a>>b>>c;
        if((c>a&&c>b)||(c%gcd(a,b)!=0))
        {
            cout<<"-1"<<endl;
        }
        else
            {
                a_f=gcda(0,0,c,a,b);
                b_f=gcda(0,0,c,b,a);
                res=(a_f<b_f)?a_f:b_f;
                cout<<res<<endl;
            }
    }
    return 0;
}
