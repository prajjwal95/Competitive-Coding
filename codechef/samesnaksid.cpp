#include <iostream>
#include <vector>
using namespace std;

int main(void){
	int noCases;
	vector<string> vec;
	cin>>noCases;
	for(int i=0;i<noCases;i++){
		int first[4];
		int second[4];
		bool rowbool1;
		bool rowbool2;
		bool pointbool1;
		bool pointbool2;
		for(int j=0;j<4;j++){
			cin>>first[j];
		}
		for(int j=0;j<4;j++){
			cin>>second[j];
		}
		if(first[0]==first[2]){
			rowbool1=false;

		}
		else{
			rowbool1=true;

		}
		if(second[0]==second[2]){
			rowbool2=false;
		}
		else{
			rowbool2=true;
		}
		if(first[0]==first[2]&&first[1]==first[3]){
			pointbool1 = true;
		}
		if(second[0]==second[2]&&second[1]==second[3]){
			pointbool2 = true;
		}
		if(pointbool1&&!(pointbool2)){
			rowbool1 = rowbool2;

		}
		if(!pointbool1&&pointbool2){
			rowbool2 = rowbool1;
		}
		if(rowbool1&&rowbool2){
			if(first[0]>first[2]){
					std::swap(first[0],first[2]);
			}
			if(second[0]>second[2]){
				std::swap(second[0],second[2]);
			}
			if((first[0]<=second[2] && second[0]<=first[2])&&(first[1]==second[1]&&first[3]==second[3])){
				//cout<<"here1";
				vec.push_back("yes");
			}
			else{
				vec.push_back("no");
			}
		}
		else if(!rowbool2 && !rowbool1){
			if(first[1]>first[3]){
					std::swap(first[0],first[2]);
			}
			if(second[1]>second[3]){
				std::swap(second[1],second[3]);
			}
			if((first[1]<=second[3] && second[1]<=first[3])&&(first[0]==second[0]&&first[2]==second[2])){
				//cout<<"here2";

				vec.push_back("yes");
			}
			else{
				//cout<<"here3";

				vec.push_back("no");
			}
		}
		else if(rowbool1&&!rowbool2){
			if(first[0]>first[2]){
				std::swap(first[0],first[2]);
			}
			if(second[0]==first[0]||second[0]==first[2]){
				//cout<<"here4";
				if(second[1]==first[1]||second[1]==first[3]||second[3]==first[1]||second[3]==first[3])
				{
					vec.push_back("yes");
				}
				else{
					vec.push_back("no");
				}

			}
			else{
				//cout<<"here5";
				vec.push_back("no");
			}

		}
		else{
			if(second[0]>second[2]){
				std::swap(second[0],second[2]);
			}
			if(first[0]==second[0]||first[0]==second[2]){
				//cout<<"here6";
				if(first[1]==second[1]||first[1]==second[3]||first[3]==second[1]||first[3]==second[3])
				{
					vec.push_back("yes");
				}
				else{
					vec.push_back("no");
				}
			}
			else{
				//cout<<"here7";
				vec.push_back("no");
			}
		}
	}

	for(int i=0;i<vec.size();i++){
		cout<<vec[i]<<endl;
	}

}
