#include <iostream>
#include <vector>
using namespace std;
struct heap{
	vector<int> v;
	void insert(int x){
		v.push_back(x);
		sift_up(v.size()-1);
	}
	void sift_up(int pos){
		int parent = (pos - 1)/2;
		if(parent>=0){
			if(v[parent] < v[pos]){
				swap(v[parent],v[pos]);
				sift_up(parent);
			}
		}else{
			return;
		}
	}
	void sift_down(int pos){
		int ch1 = 2 * pos + 1;
		int ch2 = 2 * pos + 2;
		if(pos>=v.size()) return;
		if(ch1<v.size()){
			if(ch2<v.size()){
				if(v[pos]< v[ch1] && v[ch1]>=v[ch2]){
					swap(v[pos],v[ch1]);
					sift_down(ch1);
				}else{
					if(v[pos] < v[ch2] && v[ch2]>v[ch1]){
						swap(v[pos],v[ch2]);
						sift_down(ch2);
					}
				}
			}else{
				if(v[pos]<v[ch1]){
					swap(v[pos],v[ch1]);
					sift_down(ch1);
				}
			}
		}
	}

	int extract(){
		int res = v[0];
		v[0] = v[v.size()-1];
		v.pop_back();
		sift_down(0);
		return res;
	}
};
int main(){
	heap h;
	int n;
	cin>>n;
	int x;
	int y;
	for(int i =0;i<n;i++){
		cin>>x;
		if(x==0){
			cin>>y;
			h.insert(y);
		}
		if(x==1){
			cout<<h.extract()<<endl;
		}
	}





	return 0;
}