#include <iostream>
#include <vector>
#include <queue>
using namespace std;
vector<vector<int> > g(101);
bool used[101];
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
	queue<int> q;
	q.push(1);
	vector<int> distance(n+1), parent(n+1);
	used[1] = true;
	parent[1] = 0;
	while(!q.empty()){
		int cur = q.front();
		q.pop();
		for(int i = 0;i<g[cur].size();i++){
			int to = g[cur][i];
			if(!used[to]){
				used[to] = true;
				q.push(to);
				distance[to] = distance[cur] + 1;
				parent[to] = cur;
			}
		}
	}
	for(int i = 1;i<= n;i++){
		if(!used[i]){
			cout<<i<<" "<<-1<<endl;
		}else{
			cout<<i<<" "<<distance[i] - distance[1]<<endl;
		}
	}
	return 0;
}