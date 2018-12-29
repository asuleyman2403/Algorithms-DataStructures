#include <iostream>
using namespace std;
struct node{
	int value;
	node * prev;
	node(int x,node * pr){
		value = x;
		prev = pr;
	}
};
struct mystack{
	int size = 0;
	node top = NULL;
	void push(int x){	
		node * n = new node(x,top);
		top = n;
		size++;
	}
	bool empty(){
		return size == 0;
	}
	void pop(){
		if(!empty()){
			top = top - > prev;
			size--;
		}
	}
	int getSize(){
		return size;
	}
	int getTop(){
		if(!empty()){
			return top->val; // make it void and just cout value if considered stack is not empty
		}
	}
	void clear(){
		top = NULL;
		size = 0;
	}

};
int main(){










	return 0;
}