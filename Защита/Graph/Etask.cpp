#include <iostream>
#include <vector>
using namespace std;
int main(){
	int n;
	cin>>n;
	vector<vector<int> > v(n);
	for(int i = 0;i<n;i++){
		vector<int> g(n);
		int u,k;
		cin>>u>>k;
		for(int j = 0;j<k;j++){
			int x;
			cin>>x;
			g[x-1] = 1;
		}
		v[i] = g;
	}
	for(int i = 0;i<n;i++){
		for(int j = 0;j<n-1;j++){
			cout<<v[i][j]<<" ";
		}
		cout<<v[i][n-1];
		cout<<endl;
	}
	return 0;
}