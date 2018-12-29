#include <iostream>
#include <cmath>
#include <set>
#include <map>
using namespace std;
string convert(int x){
	string res = "";
	while(x!=0){
		res = char(x%10 + '0') + res;
		x/=10;
	}
	return res;
}
long long hashIt(string s){
	long long h = 0;
	long long p = 1;
	for(int i = 0;i<s.size();i++){
		h+=(s[i] - 'a' + 1)*p;
		p*=31;
	}
	return h;
}
int main(){
	//freopen("input.txt","r",stdin);
	int n;
	cin>>n;
	map<long long,int> ss;
	string s;
	int k;
	set<long long>::iterator it;
	for(int i = 0;i<n;i++){
		cin>>s;
		k = ss.size();
		long long x = hashIt(s);
		ss[x]++;
		if(ss.size()!=k){
			cout<<"OK"<<endl;
		}else{
			int cnt = ss[x];
			string g;
			g = s + convert(cnt-1);
			ss[hashIt(g)];
			cout<<g<<endl;
		}
	}

	return 0;
}