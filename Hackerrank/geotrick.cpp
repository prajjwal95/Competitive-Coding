#include <bits/stdc++.h>

using namespace std;
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

    for(i=0;i<n1;i++){
         int n22=0;
        while(n22<n2){
            int n33=0;
            while(n33<n3){
                if(((b[n22]+1)*(b[n22]+1))==(a[i]+1)*(c[n33]+1)){
                    count++;
                }
                n33++;
            }
            n22++;
        }
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
