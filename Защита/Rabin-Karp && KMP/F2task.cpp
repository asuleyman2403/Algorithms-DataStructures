#include <iostream>
#include <vector>
#include <set>
using namespace std;
vector<long long> p_pow;
vector<long long> hashIt(string s){
	p_pow.clear();
	vector<long long> h;
	p_pow.push_back(1);
	h.push_back(s[0] - 'A' + 1);
	for(int i = 1;i<s.size();i++){
		p_pow.push_back(p_pow[i-1] * 31);
		h.push_back(h[i-1] + p_pow[i] * (s[i] - 'A' + 1));
	}
	return h;
}
int main(){
	int n;
	cin>>n;
	for(int i  = 0;i<n;i++){
		int res = 0;
		string s;
		cin>>s;
		vector<long long> h = hashIt(s);
		for(int j = 1;j<=s.size();j++){
			set<long long> dist;
			for(int k = 0;k<=s.size() - j;k++){
				long long c = h[k + j - 1];
				if(k>0) c-=h[k-1];
				dist.insert(c * p_pow[h.size()-1-k]);
			}
			res+=dist.size();
		}
		cout<<res<<endl;
	}







	return 0;
}