#include <iostream>
#include <map>
#include <vector>
#include <cmath>
using namespace std;
vector <int> prefix(string s){
	int size = s.size();
	vector <int> pi(size);
	pi[0] = 0;
	for (int i = 1; i < size; i++)
	{
		int j = pi[i - 1];
		while (j > 0 && s[i] != s[j])
			j = pi[j - 1];
		if (s[i] == s[j]) j++;
		pi[i] = j;
	}
	return pi;
}
int main(){
	//freopen("input.txt","r",stdin);
	int n;
	while(cin>>n){
		if(n<=0) return 0;
		string s;
		vector<string> v;
		vector<int> t(n);
		for(int i = 0;i<n;i++){
			cin>>s;
			v.push_back(s);
		}
		cin>>s;
		int maxl = 0;
		for(int i = 0;i<v.size();i++){
			map<int,int> m;
			string str = v[i] + "#" + s;
			vector<int> p = prefix(str);
			for(int j = v[i].size()+1;j<p.size();j++){
				m[p[j]]++;
			}
			maxl = max(maxl,m[v[i].size()]);
			t[i] = m[v[i].size()];
		}
		cout<<maxl<<endl;
		for(int i = 0;i<v.size();i++){
			if(maxl == t[i]){
				cout<<v[i]<<endl;
			}
		}
	}


	return 0;
}