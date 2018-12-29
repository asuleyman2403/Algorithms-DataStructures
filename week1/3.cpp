#include <iostream>
#include <vector>
using namespace std;
int main(){
	std::vector<int> vt;
	string s;
	int n;
	while(cin>>s){
		if(s=="push"){
			cin>>n;
			vt.push_back(n);
			cout<<"ok"<<endl;
		}
		if(s=="pop"){
			cout<<vt[0]<<endl;
			vt.erase(vt.begin());
		}
		if(s=="front"){
			cout<<vt[0]<<endl;
		}
		if(s=="size"){
			cout<<vt.size()<<endl;
		}
		if(s=="clear"){
			while(vt.size()!=0){
				vt.erase(vt.begin());
			}
			cout<<"ok"<<endl;
		}
		if(s=="exit"){
			cout<<"bye"<<endl;
			break;
		}
	}




	return 0;
}