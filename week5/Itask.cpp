#include <iostream>
using namespace std;
struct node{
	int val;
	int cnt;
	node * left;
	node * right;
	node(int x){
		val = x;
		cnt = 0;
		left = NULL;
		right = NULL;
	}
};
node * add(int x ,node * root){
	node * nd = new node(x);
	if(root == NULL){
		root = nd;
		root ->cnt = 1;
	}else{
		if(x<root->val){
			if(root->left!=NULL){
				add(x,root->left);
			}else{
				root->left = nd;
				root->left->cnt = 1;
			}
		}else{
			if(x>root->val){
				if(root->right!= NULL){
					add(x,root->right);
				}else{
					root->right = nd;
					root->right->cnt = 1;
				}
			}else{
				if(x == root->val){
					root->cnt++;
				}
			}
		}
	}
	return root;
}
void print(node * root){
	if(root == NULL){
		return ;
	}else{
		print(root->left);
		cout<<root->val<<" "<<root->cnt<<endl;
		print(root->right);
	}
}
int main(){
	node * root = NULL;
	while(true){
		int k;
		cin>>k;
		if(k == 0)break;
		root = add(k,root);
	}
	print(root);

	return 0;
}