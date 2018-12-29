#include <iostream>
using namespace std;
int findc(int a[],int n,int b){
	int res;
	int head = 0;
	int tail = n-1;
	int mid;
	while(true){
		if(head == tail){
			break;
		}
		 mid = (head + tail)/2;
		 if(b>a[mid]){
		 	head = mid+1;
		 }else{
		 	tail = mid;
		 }
	}
	if(head == 0){
		return a[0];
	}else{
		if(b - a[head-1] <= a[head]-b){
			return a[head-1];
		}
	}
	return a[head];
}
int main(){
	int n,k;
	cin>>n>>k;
	int a[n];
	int b[k];
	for(int i = 0;i<n;i++){
		cin>>a[i];
	}
	for(int i = 0;i<k;i++){
		cin>>b[i];
		cout<<findc(a,n,b[i])<<endl;
	}
	return 0;
}