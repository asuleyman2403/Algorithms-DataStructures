#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> prefix(string s){
	vector<int> p(s.size());
	p[0] = 0;
	for(int i = 1;i < s.size();i++){
		int j = p[i-1];
		while(j>0 && s[i]!=s[j]){
			j = p[j-1];
		}
		if(s[i] == s[j]) j++;
		p[i] = j;
	}
	return p;
}
int main(){
	int n;
	cin>>n;
	string s;
	for(int i = 0;i<n;i++){
		cin>>s;
		int ans = 1;
		string temp = "";
		temp += s[0];
		for (int i = 1; i < s.length(); i++)
		{
			temp += s[i];
			string t = temp;
			reverse(t.begin(), t.end());
			vector<int> v;
			v = prefix(t);
			int mx = -1;
			for (int j = 0; j < v.size(); j++)
			{
				if (v[j] > mx) mx = v[j];
			}
			ans += (temp.length() - mx);
		}
		cout<<ans<<endl;
	}
	return 0;
}
