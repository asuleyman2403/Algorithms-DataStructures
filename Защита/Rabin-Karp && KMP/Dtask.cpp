#include <iostream>
#include <vector>
using namespace std;
vector <int> prefix(string s)
{
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
	cin>>n;
	string s,t;
	for(int i = 0;i<n;i++){
		cin>>s>>t;
		string str = t + "#" + s;
		vector<int> pr;
		pr = prefix(str);
		vector<int> v;
		for(int j = t.size()+1;j<pr.size();j++){
			if(t.size() == pr[j]) v.push_back(j - 2 * t.size() + 1);
		}
		if(v.size() == 0){
			cout<<"Not Found"<<endl;
		}
		else{
			cout<<v.size()<<endl;
			for(int j = 0;j<v.size();j++){
				cout<<v[j]<<" ";
			}
			cout<<endl;
		}
	}

	return 0;
}