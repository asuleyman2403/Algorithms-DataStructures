#include <iostream>
#include <map>
#include <vector>
using namespace std;
vector<int> prefix(string s){
	vector<int> pr(s.size());
	pr[0]=0;
	for(int i = 1;i<s.size();i++){
		int j = pr[i-1];
		while(j>0 && s[j]!=s[i]){
			j = pr[j-1];
		}
		if(s[i]==s[j]) j++;
		pr[i]=j;
	}
	return pr;
}
int main(){
	string s;
	while(true){
		cin>>s;
		if(s == ".") return 0;
		vector<int> v = prefix(s);
		int k = s.size() - v[s.size() - 1];
		cout<<s.size() / k<<endl;
	}
	return 0;
}