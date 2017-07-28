#include <iostream>
#include <string.h>

using namespace std;


int auxcount = 0;
int startpos=-1;
int startpos2 = -1;

bool helper(char seq1[],char seq2[],int count,int present,int row){
//	cout<<"why: "<<count<<endl;
//	cout<<"why2: "<<auxcount<<endl;
//	cout<<"why3: "<<present<<endl;

	//cout<<seq1[present]<<"\t"<<seq2[present]<<"\t"<<seq1[present+1]<<endl;
	if(auxcount==count){
		//cout<<"auxc: "<<auxcount<<endl;
		return true;
	}
	else{
	if(row==1){

		if(seq2[present]=='.'){
			if(present+1>strlen(seq1)-1){
				if(seq1[present]=='#'){
					seq1[present]='.';
					auxcount++;}
				//cout<<"here1";
				return (auxcount==count);
			}
			else{
				if(seq1[present+1]=='.'){
					//cout<<"here2";
					if(seq1[present]=='#'){auxcount++;}
					return (auxcount==count);
				}
			}
		}

		if(seq2[present]=='#'){
			auxcount++;
			seq1[present]='.';
			//cout<<count<<"  "<<present<<"  "<<2<<endl;
			return helper(seq1,seq2,count,present,2);
		}
		if(seq1[present+1]=='#'){
			//cout<<"fuckkk"<<endl;
			seq1[present]='.';
			auxcount++;
			//cout<<count<<"  "<<present+1<<"  "<<1<<endl;
			return helper(seq1,seq2,count,present+1,1);
		}
	}
	else{
		if(seq1[present]=='.'){
			if(present+1>strlen(seq2)-1){
				if(seq2[present]=='#'){
					seq2[present]='.';
					auxcount++;
				}
				//cout<<"here3";
				//cout<<(auxcount==count);
				return (auxcount==count);
			}
			else{
				if(seq2[present+1]=='.'){
					//cout<<"here4"<<endl;
					//cout<<auxcount<<"\t"<<count<<endl;
					//cout<<(auxcount==count)<<endl;
					if(seq2[present]=='#'){auxcount++;}
					return (auxcount == count);
				}
			}
		}
		if(seq1[present]=='#'){
			auxcount++;
			seq2[present]='.';
			//cout<<count<<"  "<<present<<"  "<<1<<endl;
			return helper(seq1,seq2,count,present,1);
		}
		if(seq2[present+1]=='#'){
			seq2[present]='.';
			auxcount++;
			//cout<<count<<"  "<<present+1<<"  "<<2<<endl;
			return helper(seq1,seq2,count,present+1,2);
		}
	}
}
}


int main(){
	int T;
	cin>>T;
	for(int i=0;i<T;i++){
		int n;
		int count = 0;
		startpos = -1;
		cin>>n;
		char seq1[n];
		char seq2[n];
		char auxseq1[n];
		char auxseq2[n];
		bool flag=true;
		auxcount=0;

		startpos2=-1;
		for(int j=0;j<n;j++){
			cin>>seq1[j];
			if(seq1[j]=='#'){
				if(flag){
					startpos = j;
					flag = false;
				}
			}
			if(seq1[j]=='#'){count++;}
		}
		flag=true;
		for(int j=0;j<n;j++){
			cin>>seq2[j];
			if(seq2[j]=='#'){
				if(flag){
					startpos2 = j;
					flag = false;
				}
			}
			if(seq2[j]=='#'){count++;}
		}
		for(int l=0;l<n;l++){
			auxseq1[l]=seq1[l];
			auxseq2[l]=seq2[l];
		}
		//auxseq1 = seq1;
		//auxseq2 = seq2;
		//cout<<"what??: "<<startpos<<endl;
		bool val1;
		if(startpos==-1){
			 val1 = helper(seq1,seq2,count,startpos2,2);
		}
		else
		{
		 val1 = helper(seq1,seq2,count,startpos,1);
		}
		bool val2;
		auxcount=0;
		//cout<<startpos2<<endl;

		 val2 = helper(auxseq2,auxseq1,count,startpos2,1);

		if(startpos==-1&&startpos2==-1){
			cout<<"yes"<<endl;
		}
		else if(val1||val2){

			cout<<"yes"<<endl;
		}
		else{
			cout<<"no"<<endl;
		}
	}
	return 0;
}
