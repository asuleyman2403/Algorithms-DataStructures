#include <iostream>
using namespace std;
string isBalanced(string s){
	bool ok;
	while(!s.empty()){
		ok=false;
		for(int i=0;i<s.size();i++){
			if((s[i]=='(' && s[i+1]==')')){
				s.erase(i,2);
				ok=true;
				i-=2;
			}else{
				if((s[i]=='[' && s[i+1]==']')){
					s.erase(i,2);
					ok=true;
					i-=2;

				}else{
					if((s[i]=='{' && s[i+1]=='}')){
						s.erase(i,2);
						ok=true;
						i-=2;
					}
				}
			}
		}
		if(!ok){
			break;
		}
	}
	if(ok){
		return "YES";
	}else{
		return "NO";
	}
}
int main(){
	int n;
	cin>>n;
	for(int i =0;i<n;i++){
		string s;
		cin>>s;
		cout<<isBalanced(s)<<endl;
	}
	return 0;
}