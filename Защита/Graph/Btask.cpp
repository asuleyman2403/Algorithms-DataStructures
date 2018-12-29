#include <iostream>
#include <queue>
#include <vector>
using namespace std;
queue<pair<int,int> > q;
bool used[100][100];
int cnt = 0;
char a[100][100];
int n,m;
int dx[8] = {-1,0,1,-1,1,-1,0,1};
int dy[8] = {-1,-1,-1,0,0,1,1,1};
void bfs(int i,int j){
	q.push(make_pair(i,j));
	used[i][j] = true;
	while(!q.empty()){
		pair<int,int> p = q.front();
		q.pop();
		int x = p.first;
		int y = p.second;
		for(int k = 0;k < 8;k++){
			int nx = x + dx[k];
			int ny = y + dy[k];
			if(nx>=0 && ny>=0 && nx<n && ny<m){
				if(!used[nx][ny] && a[nx][ny]=='@'){
					used[nx][ny]=true;
					q.push(make_pair(nx,ny));
				}
			}
		}
	}
	cnt++;
}
int main(){
	while(true){
		cnt = 0;
		cin>>n>>m;
		if(n == 0 || m == 0){
			return 0;
		}

		for(int i = 0;i<n;i++){
			for(int j = 0;j<m;j++){
				cin>>a[i][j];
				used[i][j] = false;
			}
		}
		for(int i = 0;i<n;i++){
			for(int j = 0;j<m;j++){
				if(a[i][j] == '@' && !used[i][j]){
					bfs(i,j);
				}
			}
		}
		cout<<cnt<<endl;
	}
}