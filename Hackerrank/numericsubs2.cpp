#include <bits/stdc++.h>
#include<string>
#define size 300000
using namespace std;

int getMagicNumber(string s, int k, int b, int m){
      string s1[size],s2[size];
    for(int i=0;i<s.length()-k;i++){
        s1[i]=s.substr(i,k);
    }
    long long int a[size];
    int n=0;
    for(int i=0;i<s.length();i++){
            long long int l=0;
        l=strtoll(s1[i],nullptr,k);
        l=l%m;
        a[n]=l;
        n++;
    }
    int sum1=0;
    for(int i=0;i<n;i++){
        sum1+=a[i];
    }
    return sum1;
}

int main() {
    string s;
    cin >> s;
    int k;
    int b;
    int m;
    cin >> k >> b >> m;
    int result = getMagicNumber(s, k, b, m);
    cout << result << endl;
    return 0;
}

