#include <iostream>
#include <set>
#include <vector>
using namespace std;
int find(string s,int n,int k){
	int p  = 31;
	set<long long> ss;
	vector<long long> p_pow;
	vector<long long> h;
	p_pow.push_back(1);
	for(int i = 1;i< n;i++){
		p_pow.push_back(p * p_pow[i - 1]);
	}
	h.push_back(p_pow[0] * (s[0] - 'a' + 1));
	for(int i = 1;i< n;i++){
		h.push_back(h[i-1] + (s[i] - 'a' + 1) * p_pow[i]);
	}
	for(int i = 0;i <=  n - k ;i++){
		long long c = h[i + k - 1];
		if(i>0) c-=h[i - 1];
		c*=p_pow[n - 1 - i];
		ss.insert(c);	
	}
	return ss.size();
}
int main(){
	int n;
	cin>>n;
	int x,y;
	string s;
	for(int i = 0;i<n;i++){
		cin>>x>>y>>s;
		cout<<find(s,x,y)<<endl;
	}
	return 0;
}