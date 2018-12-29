#include <iostream>
using namespace std;
struct node{
	int value;
	node *prev;
	node *next;
	node(int x){
		value = x;
	}
};
struct myqueue{
private:
	node *head;
	node *tail;
	int cnt;
public:
	myqueue(){
		head = NULL;
		tail = NULL;
		cnt = 0;
	}
	bool empty(){
		return cnt==0;
	}
	void push(int x){
		node *nd = new node(x);
		if(empty()){
			head = nd;
		}else{
			tail->next = nd;
		}
		tail = nd;
		cnt++;
		cout<<"ok"<<endl;
	}
	void pop(){
		if(!empty()){
			cout<<head->value<<endl;
			head = head->next;
			cnt--;
		}
	}



};
int main(){
	myqueue q;
	string s;
	while(cin>>s){
		if(s=="push"){
			int n;
			cin>>n;
			q.push(n);
		}
		if(s=="pop"){
			q.pop();
		}
	}






	return 0;
}