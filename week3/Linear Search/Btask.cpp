#include <iostream>
using namespace std;
int main(){
	int n;
	int k;
	cin>>n;
	int a[n];
	bool ok = false;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cin>>k;
	for(int i = 0;i < n;i++){
		if(a[i] == k){
			ok=true;
		}
	}
	if(ok){
		cout<<"YES"<<endl;
	}else{
		cout<<"NO"<<endl;
	}
	return 0;
}