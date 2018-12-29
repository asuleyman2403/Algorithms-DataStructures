#include <iostream>
using namespace std;
struct node{
	int value;
	node * next;
	node(int x,node * nt){
		value = x;
		next = nt;
	}
};
struct q{
	node front = NULL;
	int size  = 0;
	bool empty(){
		return size == 0;
	}
	void push(int x){
		node * el = new node(x,front);
		front = el;
		size++;
	}
	void front(){
		if(!empty()){
			cout<<front->value;
		}
	}
	void pop(){
		if(!empty()){
			front = front -> next;
			size--;
		}
	}
	void clear(){
		size = 0;
		front = NULL;
	}
	int getSize(){
		return size;
	}
};
int main(){
	return 0;
}