#include <iostream>
using namespace std;
struct node {
	int val;
	node * next;
	node * prev;
	node(int x,node * nxt,node * prv){
		val = x;
		next = nxt;
		prev = prv;
	}

};
struct myDeq{
		node * head;
		node * tail;
		bool reversed;
		int cnt;
		void push(int x){
			node * nd = new node(x,NULL,NULL);
			tail = nd;
			head = nd;
			cnt++;
		}
		myDeq(){
			head = NULL;
			tail = NULL;
			reversed = false;
			cnt =0;
		}
		bool empty(){
			return cnt==0;
		}
		int size(){
			return cnt;
		}
		void push_back(int x){
			if(reversed){
				reversed = false;
				push_front(x);
				reversed = true;
				return;
			}
			else if(empty()){
				push(x);
			}else{
				node * nd = new node(x,NULL,tail);
				tail->next = nd;
				tail = nd;
				cnt++;
			}
		}
		
		void push_front(int x){
			if(reversed){
				reversed = false;
				push_back(x);
				reversed = true;
				return;
			}
			else if(empty()){
				push(x);
			}else{
				node * nd = new node(x,head,NULL);
				head->prev = nd;
				head = nd;
				cnt++;
			}
		}
		void back(){
			if(reversed){
				reversed = false;
				front();
				reversed = true;
				return;
			}
			
			if(!empty()){
				cout<<tail->val<<endl;
				tail = tail->prev;
				cnt--;
			}
			else{
				cout<<";("<<endl;
			}
		}
		void front(){
			if(reversed){
				reversed = false;
				back();
				reversed = true;
				return;
			}
			
			if(!empty()){
				cout<<head->val<<endl;
				head = head->next;
				cnt--;
			}
			else{
				cout<<";("<<endl;
			}
		}
		
		void reverse(){
			reversed = !reversed;
		}
};

int main(){
	int n;
	int k;
	cin>>n;
	myDeq m;
	for(int i =0;i<n;i++){
		string s;
		cin>>s;
		if(s=="back"){
			m.back();
		}
		if(s=="front"){
			m.front();
		}
		if(s=="push_back"){
			cin>>k;
			m.push_back(k);
		}
		if(s=="push_front"){
			cin>>k;
			m.push_front(k);
		}
		if(s=="reverse"){
			m.reverse();
		}
		if(s=="cnt") {
			cout << m.cnt << endl;
		}
	}






	return 0;
}