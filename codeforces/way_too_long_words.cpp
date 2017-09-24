#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--){
        string s;
        cin>>s;
        int len=s.length();
        if(len>10)
            cout<<s[0]<<s.length()-2<<s[s.length()-1]<<endl;
        else
            cout<<s<<endl;
    }
}
