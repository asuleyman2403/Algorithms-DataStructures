#include <iostream>
#include <cmath>
using namespace std;
int left(int a[],int n,int b){
	int pos;
	int head = 0 ;
	int tail = n;
	int mid;
	bool ok = false;
	while(head<tail){
		mid = (head + tail)/2;
		if(a[mid]==b){
			pos = mid;
			break;
		}else{
			if(b<a[mid]){
				tail = mid;
			}else{
				head = mid + 1;
			}
		}
	}
	return ++pos;
}
/*int right(int a[],int n,int b){
	int head = 0 ;
	int tail = n;
	int mid;
	int pos;
	bool ok = false;
	while(head<tail){

		mid = (head + tail + 1)/2;
		if(a[mid]==b){
			pos = mid;
			break;
		}else{
			if(b<a[mid]){
				tail = mid;
			}else{
				head = mid + 1;
			}
		}
	}
	return ++pos;
}*/
bool iscontain(int a[],int n,int b){
	int head = 0 ;
	int tail = n;
	int mid;
	bool ok = false;
	while(head<tail){
		mid = (head + tail)/2;
		if(a[mid]==b){
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
			cout<<left(a,n,b[i])<<" "<<endl;
		}else{
			cout<<"0"<<endl;
		}
	}
	return 0;
}