#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int c=0;
    for(int i=0;i<n;i++){
        char ch[3];
        for(int j=0;j<3;j++){
            cin>>ch[j];
        }
        for(int j=0;j<3;j++){
            if(ch[j]=='+'){
                c++;
                break;
            }
            if(ch[j]=='-'){
                c--;
            break;
            }
        }
    }
    cout<<c<<endl;
}
