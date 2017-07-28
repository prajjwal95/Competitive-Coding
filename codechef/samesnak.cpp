#include<iostream>
#include <bits/stdc++.h>
#define siz 10000000

using namespace std;

/*int count(vector<pair<int,int> > &arr, int x1,int x2, int n)
{
  int i;
  int j;
  i = first(arr, 0, n-1, x1,x2, n);
  if(i == -1)
    return i;
  j = last(arr, i, n-1, x1,x2, n);
  return j-i+1;
}
int first(vector<pair<int,int> >&arr, int low, int high, int x1,int x2, int n)
{
  if(high >= low)
  {
    int mid = (low + high)/2;
    if( ( mid == 0 || x > arr[mid-1]) && arr[mid] == x)
      return mid;
    else if(x > arr[mid])
      return first(arr, (mid + 1), high, x, n);
    else
      return first(arr, low, (mid -1), x, n);
  }
  return -1;
}
int last(vector<pair<int,int> > &arr, int low, int high, int x1,int x2, int n)
{
  if(high >= low)
  {
    int mid = (low + high)/2;
    if( ( mid == n-1 || x < arr[mid+1]) && arr[mid] == x )
      return mid;
    else if(x < arr[mid])
      return last(arr, low, (mid -1), x, n);
    else
      return last(arr, (mid + 1), high, x, n);
  }
  return -1;
}
/*bool compare(int x21,int x22,vector<int> &a,int s)
{
    int flag=0;
 for(int i=0;i<s;i++)
 {
     if(a[i]==x21||a[i]==x22)
     {
         flag=1;
         break;
     }
 }
 if(flag==1){
    return true;
 }
 else
    return false;
}*/
int main()
{
    int t;
    cin>>t;
    while(t>0){
        int x11,x12,y11,y12,x21,x22,y21,y22,m1,m2,k=0,xt,yt;
        bool u=false,d=false;
            vector< pair<int,int> >a(siz);
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
            a.push_back(make_pair(x11,y11));
            a.push_back(make_pair(x12,y12));
            a.push_back(make_pair(x21,y21));
            a.push_back(make_pair(x22,y22));
            if((x12-x11)!=0&&(x21-x22)!=0){
                m1=(y12-y11)/(x12-x11);
                m2=(y22-y21)/(x22-x21);
                if(m1==m2){
                        d=true;
                    if((x21>=x11&&x21<=x12)||(x22>=x11&&x22<=x12)){
                        u=true;
                    }
                }
            }
            if((y12-y11)!=0&&(y21-y22)!=0){
                        d=true;
                    if((y21>=y11&&y21<=y12)||(y22>=y11&&y22<=y12)){
                        u=true;
                    }
            }
            if((x12-x11)!=0&&(x21-x22)==0){
                m1=(y12-y11)/(x12-x11);
                for(int i=1;i<(x12-x11);i++)
                    a.push_back(make_pair(x11+i,y11));
                    for(int i=1;i<(y22-y21);i++)
                    a.push_back(make_pair(x21,y21+i));
                sort(a.begin(),a.end());
                for(int i=0;i<a.size();i++){
                    if((a[i].first==a[i+1].first)&&(a[i].second==a[i+1].second))
                        k++;
                        if(k==2){
                            xt=a[t].first;
                            yt=a[t].second;
                            break;
                        }
                }
                if((xt==x11||xt==x12)&&(yt==y11||yt==y12))
                {
                    u=true;
                    d=true;
                }
                k=0;
            }
            if((x12-x11)==0&&(x21-x22)!=0){
               m2=(y22-y21)/(x22-x21);
                for(int i=1;i<(y12-y11);i++)
                    a.push_back(make_pair(x11,y11+i));
                    for(int i=1;i<(x22-x21);i++)
                    a.push_back(make_pair(x21+i,y11));
                sort(a.begin(),a.end());
                for(int i=0;i<a.size();i++){
                    if((a[i].first==a[i+1].first)&&(a[i].second==a[i+1].second))
                        k++;
                        if(k==2){
                            xt=a[t].first;
                            yt=a[t].second;
                            break;
                        }
                }
                if((xt==x21||xt==x22)&&(yt==y21||yt==y22))
                {
                    u=true;
                    d=true;
                }
                k=0;
            }
            if((x11==x12)&&(y11==y12)&&(x21==x22)&&(y21==y22))
            {
                u=true;
                d=true;
            }
            if(u&&d){
                cout<<"yes"<<endl;
            }
            else
                cout<<"no"<<endl;
                a.clear();
                t--;
    }

return 0;
}
