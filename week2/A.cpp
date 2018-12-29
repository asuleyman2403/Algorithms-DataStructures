#include <iostream>
using namespace std;
struct node{
	int value;
	node *prev;
	node(int x,node * pr){
		value = x;
		prev = pr;
	}
};
struct myStack{
	private:
		node * top;
		int cnt;
	public:
		myStack(){
			top = NULL;
			cnt = 0;
		}
		bool empty(){
			if(cnt==0){
				return true;
			}else{
				return false;
			}
		}
		void push(int x){
			node *el = new node(x,top);
			top = el;
			cnt++;
		}
		void pop(){
			if(!empty()){
				int res = top->value;
				top = top->prev;
				cnt--;
				cout<<res<<endl;
			}
		}
		int size(){
			return cnt;
		}
		void clear(){
			top = NULL;
			cnt = 0;
		}
		void back(){
			if(!empty()){
				cout<<top->value<<endl;
			}
		}
};
int main(){
	string s;
	myStack st;
	while(cin>>s){
		if(s=="push"){
			int n;
			cin>>n;
			st.push(n);
			cout<<"ok"<<endl;
		}
		if(s=="pop"){
			st.pop();
		}
		if(s=="back"){
			st.back();
		}
		if(s=="size"){
			cout<<st.size()<<endl;
		}
		if(s=="clear"){
			st.clear();
			cout<<"ok"<<endl;
		}
		if(s=="exit"){
			cout<<"bye"<<endl;
			break;
		}
	}
	return 0;
}