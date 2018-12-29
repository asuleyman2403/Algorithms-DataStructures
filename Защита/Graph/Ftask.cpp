#include <iostream>
#include <vector>
using namespace std;
bool used[101];
vector<vector<int> > g(101);
int cnt = 1;
int in[101];
int out[101];
void dfs(int v){
	for(int i = 0;i<g[v].size();i++){
		if(!used[g[v][i]]){
			used[g[v][i]] = true;
			in[g[v][i]] = cnt++;
			dfs(g[v][i]);
			out[g[v][i]] = cnt++;
		}
	}
}
int main(){
	int n;
	cin>>n;
	for(int i = 0;i<n;i++){
		int u,k;
		cin>>u>>k;
		for(int j = 0;j<k;j++){
			int x;
			cin>>x;
			g[u].push_back(x);
		}
	}

	for(int i = 1;i<=n;i++){
		if(!used[i]){
			used[i] = true;
			in[i] = cnt++;
			dfs(i);
			out[i] = cnt++;
		}
	}

	for(int i = 1;i<=n;i++){
		cout<<i<<" "<<in[i]<<" "<<out[i]<<endl;
	}

	return 0;
}