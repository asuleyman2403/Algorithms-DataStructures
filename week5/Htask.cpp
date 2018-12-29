#include <iostream>

using namespace std;
 
struct node{
    int val;
    node * left;
    node * right;
    int rH;
    int lH;
    bool isBalancedSubTree;
    node(int x){
        isBalancedSubTree = true;
        rH = 0;
        lH = 0;
        val = x;
        left = NULL;
        right = NULL;
    }
};
 
node * add(node * root, int x){
    node *n = new node(x);
    if(root == NULL){
        root = n;
    }else{
        if(x < root->val){
            if(root->left == NULL){
                root->left = n;
            }else{
                add(root->left, x);
            }
        }else if(x > root->val){
            if(root->right == NULL){
                root->right = n;
            }else{
                add(root->right, x);
            }
        }
    }
    return root;
}
 
 
int balance(node * n){
    if(n == NULL) return 0;
    n->lH = balance(n->left);
    n->rH = balance(n->right);
    if(abs(n->rH - n->lH) > 1){
        n->isBalancedSubTree = false;
    }
    return max(n->lH, n->rH) + 1;
}
 
bool isBalancedTree(node * n){
    if(n == NULL) return true;
    return (n->isBalancedSubTree &&
    isBalancedTree(n->left) &&
    isBalancedTree(n->right));
}
 
int main(){
   
    node * root = NULL;
   
    int x;
    while(cin >> x){
        if(x == 0) break;
        root = add(root, x);
    }
   
    balance(root);
   
    if(isBalancedTree(root)){
        cout << "YES";
    }else{
        cout << "NO";
    }
   
    return 0;
}