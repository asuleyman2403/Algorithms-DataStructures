#include <iostream>
using namespace std;
int binaryseacrh(int a[],int n,int x){
	int l = 0;
	int r = n - 1;
	int mid = n/2;
	while(l<r){
		if(a[mid] <x){
			l = mid + 1;
		}else{
			if(a[mid]> x){
				r = mid;
			}else{
				return mid;
			}
		}
	}
}
int main(){
	/*
	




	*/







	return 0;
}