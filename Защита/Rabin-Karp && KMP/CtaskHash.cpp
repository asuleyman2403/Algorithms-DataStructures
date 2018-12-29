#include <iostream>
#include <vector>
#include <map>
#include <cmath>
using namespace std;
pair<long long,string> hashIt(string s){
	pair<long long ,string> pr;
	long long h = 0;
	long long p_pow = 1;
	for(int i = 0;i<s.size();i++){
		h+=(s[i] - 'a' + 1) * p_pow;
		p_pow*=31;
	}
	pr.first = h;
	pr.second = s;
	return pr;
}
int main(){
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	int n;
	while(cin>>n){
		if(n==0) return 0;
		vector<pair<long long,string> > h;
		map<string,int> m;
		string s;
		for(int i = 0;i<n;i++){
			cin>>s;
			h.push_back(hashIt(s));
		}
		cin>>s;
		vector<long long> p_pow;
		vector<long long> h_s;
		p_pow.push_back(1);
		h_s.push_back(s[0] - 'a' + 1);
		for(int i = 1;i<s.size();i++){
			p_pow.push_back(31 * p_pow[i-1]);
			h_s.push_back(h_s[i-1] + (s[i] - 'a' + 1)*p_pow[i]);
		}
		int maxl = 0;
		for(int i = 0;i<h.size();i++){
			for(int j = 0;j<= s.size()- h[i].second.size();j++){
				long long c = h_s[j + h[i].second.size() - 1];
				if(j>0) c-=h_s[j-1];
				if(c == p_pow[j]*h[i].first){
					m[h[i].second]++;
				}
				maxl = max(maxl,m[h[i].second]);
			}
		}
		cout<<maxl<<endl;
		map<string,int>::iterator it;
		for(it=m.begin();it!=m.end();it++){
			if((*it).second == maxl){
				cout<<(*it).first<<endl;
			}
			//cout<<(*it).first<<" "<<(*it).second<<endl;
		}
	}

	return 0;
}