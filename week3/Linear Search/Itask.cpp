#include <iostream>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	int a[n][m];
	int cnt = 0;
	
	for(int i = 0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>a[i][j];
		}
	}
	for(int i = 0;i<n;i++){
		for(int j =0;j<m;j++){
			bool okr = true;
			bool okc = true; 
			for(int k = 0;k<n;k++){
				if(a[k][j]<a[i][j]){
					okr = false;
					break;
				}
			}
			for(int k = 0;k<m;k++){
				if(a[i][k]>a[i][j]){
					okc = false;
					break;
				}
			}
			if(okr && okc){
				cnt++;
			}
		}
	}
	cout<<cnt<<endl;

	return 0;
}