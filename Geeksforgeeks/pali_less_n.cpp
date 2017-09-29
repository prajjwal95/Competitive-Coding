#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int result=0;
	    for(int i=1;i<n;i++){
	        int res=0,rem=0;
	        int n1=i;
	        //cout<<n1<<endl;
	        while(n1>0){
	            rem=n1%10;
	            res=res*10+rem;
	            n1=n1/10;
	        }
	        if(res==i)
	            result++;
	        //cout<<result<<endl;
	    }
	    cout<<result<<endl;
	}
	return 0;
}
