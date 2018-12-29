#include <iostream>
using namespace std;
int main(){
	int x;
	int n;
	cin>>x>>n;
	int a[n][n];
	for(int i =0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
	for(int i=0;i<n;i++){
		bool ok = false;
		for(int j=0;j<n;j++){
			if(a[j][i]==x){
				ok = true;
			}
		}
		if(ok){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
	}




	return 0;
}