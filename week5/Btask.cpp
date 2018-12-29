#include <iostream>
using namespace std;
struct node{
	int val;
	node * left;
	node * right;
	node(int x){
		val =x;
		left = NULL;
		right = NULL;
	}
};
int cnt = 0;
node * add(node * root,int x){
	node *n = new node(x);
	if(root == NULL){
		root = n;
		cnt++;
	}else{
		if(x<root->val){
			if(root->left == NULL){
				root->left = n;
				cnt++;
			}else{
				add(root->left,x);
			}
		}else{
			if(x>root->val){
				if(root->right == NULL){
					root->right = n;
					cnt++;
				}else{
					add(root->right,x);
				}
			}
		}

	}
	return root;
}
int main(){
	node *root = NULL;
	while(true){
		int k;
		cin>>k;
		if(k!=0){
			root = add(root,k);
		}else{
			break;
		}
	}
	cout<<cnt<<endl;
	return 0;
}