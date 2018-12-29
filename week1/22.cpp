#include <iostream>
#include <vector>
using namespace std;
int main(){
	vector<int> p1;
	vector<int> p2;
	int n;
	int c;
	int cnt=0;
	string ss="botva";
	for(int j=0;j<5;j++){
		cin>>n;
		p1.push_back(n);
	}
	for(int j=0;j<5;j++){
		cin>>n;
		p2.push_back(n);
	}	
	while(!p1.empty() || !p2.empty()){
		if((p1[0]==9 && p2[0]==0)){
			p2.push_back(p2[0]);
            p2.push_back(p1[0]);
            p1.erase(p1.begin());
            p2.erase(p2.begin());
		}else{
			if(p1[0]==0 && p2[0]==9){
          	  p1.push_back(p1[0]);
          	  p1.push_back(p2[0]);
          	  p2.erase(p2.begin());	
          	  p1.erase(p1.begin());				
			}else{
				if(p1[0]<p2[0]){
            		p2.push_back(p2[0]);
            		p2.push_back(p1[0]);
           		    p1.erase(p1.begin());
            		p2.erase(p2.begin());					
				}else{
        	  	  p1.push_back(p1[0]);
          		  p1.push_back(p2[0]);
          		  p2.erase(p2.begin());	
          		  p1.erase(p1.begin());						
				}
			}
		}
		cnt++;
		if(cnt>=1000000){
			cout<<ss<<endl;
			break;
		}
	}

	if(p1.size()==0){
		cout<<"second "<<cnt<<endl;
	}else{
		if(p2.size()==0){
			cout<<"first "<<cnt<<endl;
		}
	}







	return 0;
}