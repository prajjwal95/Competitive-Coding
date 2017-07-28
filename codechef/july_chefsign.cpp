#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
            string s1;
            int c1=1,c2=1,max1=1,max2=1,k=0,j=0;
            cin>>s1;
            s1.erase(std::remove(s1.begin(), s1.end(), '='), s1.end());
            //cout<<s1<<endl;
             j=0;
            while(j<s1.length()){
                c1=1;
                while(j<s1.length()&&s1[j]=='<'){
                    c1++;
                    j++;
                }
                if(c1>max1)
                    max1=c1;
                    j++;
                    //cout<<max1<<" ";
            }
            //cout<<endl;
            k=0;
             while(k<s1.length()){
                c2=1;
                while(k<s1.length()&&s1[k]=='>'){
                    c2++;
                    k++;
                }
                if(c2>max2)
                    max2=c2;
                    k++;
                     //cout<<max2<<" ";

            }
            //cout<<endl;
                if(max1>=max2)
                cout<<max1<<endl;
                else
                cout<<max2<<endl;
            }

    return 0;
}
