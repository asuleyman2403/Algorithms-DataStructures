#include <iostream>
#include <vector>
using namespace std;
struct heap{
	vector<int> v;
	void add(int x){
		v.push_back(x);
		sift_up(v.size()-1);
	}
	void sift_up(int pos){
		int parent = (pos - 1)/2;
		if(parent>=0){
			if(v[parent]> v[pos]){
				swap(v[parent],v[pos]);
				sift_up(parent);
			}
		}else{
			return;
		}
	}
	/*void sift_down(int pos){
		int ch1 = 2 * pos + 1;
		int ch2 = 2 * pos + 2;
		if(pos>=v.size()) return;
		if(ch1<v.size()){
			if(ch2<v.size()){
				if(v[pos] > v[ch1] && v[ch1]<=v[ch2]){
					swap(v[pos],v[ch1]);
					sift_down(ch1);
				}else{
					if(v[pos] < v [ch2] && v[ch1]>v[ch2]){
						swap(v[pos],v[ch2]);
						sift_down(ch2);
					}
				}
			}else{
				if(v[pos] > v[ch1]){
					swap(v[pos],v[ch1]);
					sift_down(ch1);
				}
			}
		}
	}*/
	int extract_min(){
		return v[0];
	}
};
int main(){
	int n;
	cin>>n;
	int k;
	cin>>k;
	int a[n];
	for(int i = 0;i<n;i++){
		cin>>a[i];
	}
	for(int i = 0;i<n-k+1;i++){
		heap h;
		for(int j = 0;j<k;j++){
			h.add(a[i+j]);
		}
		cout<<h.extract_min()<<endl;
	}
	return 0;
}