#include <iostream>
using namespace std;
int findrange(int a[],int n,int b){
	int res;
	int head = 0;
	int tail = n-1;
	int mid;
	while(head<=tail){
		mid = (head + tail)/2;
		if(b == a[mid]){
			return mid;
		}
		if(b>a[mid]){
			if(b<a[mid+1]){
				return mid +1;
			}else{
				head = mid +1;
			}
		}else{
			if(b>a[mid-1]){
				return mid;
			}else{
				tail = mid -1;
			}
		}
	}
}
int main(){
	int n;
	cin>>n;
	int a[n];
	int c[n];
	for(int i = 0;i < n;i++){
		cin>>a[i];
	}
	for(int i = 1;i<n;i++){
		a[i] = a[i-1] + a[i];
	}
	int m;
	cin>>m;
	int b[m];
	/*for(int i = 0;i<n;i++){
		cout<<a[i]<<" ";
	}*/
	for(int i =0;i < m;i++){
		cin>>b[i];
		cout<<findrange(a,n,b[i]) + 1<<endl;
	}

	return 0;
}