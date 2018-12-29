#include <iostream>
#include <stack>
using namespace std;
int main(){
	stack<int> st;
	string s;
	int n;
	while(cin>>s){
		if(s=="push"){
			cin>>n;
			st.push(n);
			cout<<"ok"<<endl;
		}
		if(s=="pop"){
			if(st.empty()){
				cout<<"error"<<endl;
			}else{
				n = st.top();
				st.pop();
				cout<<n<<endl;			
			}

		}
		if(s=="back"){
			if(st.empty()){
				cout<<"error"<<endl;
			}else{
				n = st.top();
				cout<<n<<endl;
			}
		}
		if(s=="size"){
			cout<<st.size()<<endl;
		}
		if(s=="clear"){
			while(!st.empty()){
				st.pop();
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