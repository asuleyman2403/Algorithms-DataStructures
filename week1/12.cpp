#include <iostream>
#include <vector>
using namespace std;
int main(){
	vector<string> nine;
	vector<string> ten;
	vector<string> eleven;
	string s;
	int n;
	while(cin>>n){
		cin>>s;
		if(n==9){
			nine.push_back(s);
		}
		if(n==10){
	    	ten.push_back(s);
		}
		if(n==11){
	    	eleven.push_back(s);
		}
	}
	for(int i=0;i<nine.size();i++){
		cout<<"9 "<<nine[i]<<endl;
	}
		for(int i=0;i<ten.size();i++){
		cout<<"10 "<<ten[i]<<endl;
	}
		for(int i=0;i<eleven.size();i++){
		cout<<"11 "<<eleven[i]<<endl;
	}






	return 0;
}