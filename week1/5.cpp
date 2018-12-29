#include <iostream>
#include <vector>
using namespace std;
int main(){
	int n;
	string s;
	vector<int > vt;
	while(cin>>s){
		if(s=="push_front"){
			cin>>n;
			vt.insert(vt.begin(),1,n);
			cout<<"ok"<<endl;
		}
		if(s=="push_back"){
			cin>>n;
			vt.push_back(n);
			cout<<"ok"<<endl;
		}
		if(s=="pop_back"){
			n = vt[vt.size()-1];
			cout<<n<<endl;
			vt.erase(vt.end());
		}
		if(s=="pop_front"){
			n = vt[0];
			cout<<n<<endl;
			vt.erase(vt.begin());
		}
		if(s=="front"){
			n = vt[0];
			cout<<n<<endl;
		}
		if(s=="back"){
			n = vt[vt.size()-1];
			cout<<n<<endl;
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