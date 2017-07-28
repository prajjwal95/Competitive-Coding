#include <iostream>
#include <vector>

using namespace std;

int main(void){
	int T;
	cin>>T;
	for(int i=0;i<T;i++){
		int n;
		cin>>n;
		char seq1[n];
		char seq2[n];
		for(int j=0;j<n;j++){
			cin>>seq1[j];
		}
		for(int j=0;j<n;j++){
			cin>>seq2[j];
		}
		if(n==1){
			if(seq1[0]=='*'&&seq2[0]=='*'){
				cout<<1<<endl;
			}
			else{
				cout<<0<<endl;
			}
		}
		else{
			int count = n-1;
			for(int j=n-1;j>0;j--){
				bool flag1=true,flag2=true;
				if(seq1[j-1]=='*'){
					for(int k=j;k<=n-1;k++){
						if(seq1[k]=='*'){
							flag1=false;
							break;
						}
					}
				}

				if(seq2[j-1]=='*'){
					for(int k=j;k>=n-1;k++){
						if(seq2[k]=='*'){
							flag2=false;
							break;
						}
					}
				}
			//cout<<"flag1: "<<flag1<<endl;
			//cout<<"flag2: "<<flag2<<endl;
			if(flag1&&flag2){
				count--;
			}

		}
		bool horiz = false;
		for(int j=0;j<n;j++){
			if(seq1[j]=='*'&&seq2[j]=='*'){
				horiz=true;
				break;
			}
		}
		//cout<<"horiz: "<<horiz<<endl;
		//cout<<"count: "<<count<<endl;
		if(horiz){
			cout<<count+1<<endl;
		}
		else{
			cout<<count<<endl;
		}
	}
}


}
