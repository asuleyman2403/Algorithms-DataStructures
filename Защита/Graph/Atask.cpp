#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> g[101];
vector<int> res;
bool used[101];
void dfs(int v){
	used[v] = true;
	for (int i = 0; i < g[v].size(); i++){
		int to = g[v][i];
		if (!used[to]){
			dfs(to);
		}
	}
	res.push_back(v);
}
void topSort(int n){
	for (int i = 1; i <= n; i++)
		used[i] = false;
	res.clear();
	for (int i = 1; i <= n; i++){
		if (!used[i]){
			dfs(i);
		}
	}
	reverse(res.begin(), res.end());
	for (int i = 0; i < res.size(); i++){
		cout<<res[i]<<" ";
	}
	cout << endl;
}
int main(){
	int n, m;
	while (cin >> n >> m){
		if (n == 0 && m == 0) break;
		for (int i = 0; i < m; i++){
			int u, v;
			cin >> u >> v;
			g[u].push_back(v);
		}
		topSort(n);
	}
	return 0;
}