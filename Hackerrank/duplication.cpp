#include <bits/stdc++.h>

using namespace std;

char flip(char c) {return (c == '0')? '1': '0';}
string duplication(int x){
    string s="0";
    string s2="1";
    s=s.append(s2);

    while(s.length()<=x){
        s2="";
        int i=0;

    while(i<s.length()){
        s2+=flip(s[i]);
        i++;
    }
    s=s.append(s2);
    }

    string sr="";
     sr+=s[x];
    return sr;
}

int main() {
    int q;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        int x;
        cin >> x;
        string result = duplication(x);
        cout << result << endl;
    }
    return 0;
}
