#include <iostream>
#include <cmath>
using namespace std;
struct node{
	int val;
	int level;
	node *left;
	node *right;
	node(int x){
		val = x;
		left = NULL;
		right = NULL;
		level = -1;
	}
};
int height = 0;
node * add(node * root,int x){
	node *n = new node(x);
	if(root == NULL){
		root = n;
		root->level = 1;
		height = max(root->level,height);
	}else{
		if(x<root->val){
			if(root->left == NULL){
				root->left = n;
				root->left->level = root->level + 1;
				height = max(height,root->left->level);
			}else{
				add(root->left,x);
			}
		}else{
			if(x>root->val){
				if(root->right == NULL){
					root->right = n;
					root->right->level = root->level + 1;
				    height = max(height,root->right->level);
				}else{
					add(root->right,x);
				}
			}
			
		}
	}
	return root;
}
int main(){
	node * root = NULL;
	while(true){
		int k;
		cin>>k;
		if(k==0){
			break;
		}else{
			root = add(root,k);
		}
	}
	cout<<height<<endl;
	return 0;
}