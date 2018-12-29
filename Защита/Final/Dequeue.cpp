#include <iostream>
using namespace std;
struct node{
	int val;
	node * prev;
	node * next;
	node(int v,node * pr, node * nt){
		val = v;
		prev = pr;
		next = nt;
	}
};
struct deq{
	int size = 0;
	node first = NULL;
	node last = NULL;
	bool empty(){
		return size == 0;
	}
	void push_front(int x){
		node * nd = new node(x, NULL, first);
		first = nd;
		size++;
	}
	void push_back(int x){
		node * nd = new node(x,last,NULL);
		last = nd;
		size++;
	}
	void pop_front(){
		if(!empty()){
			first = first ->last;
		}
	}
	void pop_back(){
		if(!empty()){
			last = last -> first;
		}
	}
};
int main(){





	return 0;
}