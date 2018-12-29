#include <iostream>
using namespace std;
struct node{
	int value;
	node *prev;
	node(int x,node *pr){
		value = x;
		prev=pr;
	}
};
struct myStack{
	private:
		node *top;
		int cnt;
	public:
		myStack(){
			top = NULL;
			cnt = 0;
		}
		bool empty(){
			return cnt==0;
		}
		void push(int n){
			node *nd = new node(n,top);
			top = nd;
			cnt++;
			cout<<"ok"<<endl;
		}
		void pop(){
			if(!empty()){
				cout<<(top->value)<<endl;
				top=top->prev;
				cnt--;
			}else{
				cout<<"error"<<endl;
			}
		}
		void back(){
			if(!empty()){
				cout<<top->value<<endl;
			}else{
				cout<<"error"<<endl;
			}
		}
		int size(){
			return cnt;
		}
		void clear(){
			top = NULL;
			cnt = 0;
			cout<<"ok"<<endl;
		}

};
int main(){
	myStack st;
	string s;
	while(cin>>s){
		if(s=="push"){
			int x;
			cin>>x;
			st.push(x);
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
		}
		if(s=="exit"){
			cout<<"bye"<<endl;
			break;
		}
	}





	return 0;
}