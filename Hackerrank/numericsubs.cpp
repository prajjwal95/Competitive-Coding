#include <bits/stdc++.h>
#include<string>
using namespace std;

int getMagicNumber(string s, int k, int b, int m){
    string s1[s.length()];
    for(int i=0;i<s.length()-k;i++){
        s1[i]=s.substr(i,k);
    }
    int k1=0,j=0,sum1=0;
    string s2[s.length()];
    for(int i=0;i<s.length();i++){
        while(k1<=s1[i].length()){
                s1[i]=atoi(s1[i]);
            sum1=sum1+(pow(b,((s1[i].length)-k1))*s1[i].at(k1));
            k1++;
        }
        s2[j]=atoi(s2[j]);
        s2[j]=sum1;
        j++;
        k1=0;
        sum1=0;
    }
    for(int i=0;i<s.length();i++){
        s2[i]=(s2[i]-'0')% m;
    }
    int sum=0;
    for(int i=0;i<s2.length();i++){
        sum=sum+s2[i]-'0';
    }
    return sum;
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
