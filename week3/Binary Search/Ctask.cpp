#include <iostream>
using namespace std;
bool iscontain(int a[],int n,int b){
	int head = 0;
	int tail = n;
	int mid;
	bool ok = false;
	while(head<tail){
		mid = (head + tail)/2;
		if(b == a[mid]){
			ok = true;
			break;
		}else{
			if(b<a[mid]){
				tail = mid;
			}else{
				head = mid + 1;
			}
		}
	}
	return ok;
}
int main(){
	int n;
	cin>>n;
	int k;
	cin>>k;
	int a[n];
	int b[k];
	for(int i =0;i<n;i++){
		cin>>a[i];
	}
	for(int i =0;i<k;i++){
		cin>>b[i];
		if(iscontain(a,n,b[i])){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}