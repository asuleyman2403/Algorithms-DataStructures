#include <iostream>
using namespace std;
struct node{
    int val;
    node * left;
    node * right;
    node * parent;
    node(int x){
        val =x;
        left = NULL;
        right = NULL;
        parent = NULL;
    }
};
node *add(int x,node * root){
    node * nd = new node(x);
    if(root == NULL){
        root = nd;
        root->parent = NULL;
    }else{
        if(x<root->val){
            if(root->left==NULL){
                root->left = nd;
                root->left->parent = root;
            }else{
                add(x,root->left);
            }
        }else{
            if(x>root->val){
                if(root->right==NULL){
                    root->right = nd;
                    root->right->parent = root;
                }else{
                    add(x,root->right);
                }
            }
        }
    }
    return root;
}


int rightmost(node * node){
    if(node->right == NULL) return node->val;
    return rightmost(node->right);
}


int findsecondmax(node * node){
    if(node->right == NULL){
        if(node->left != NULL){
            return rightmost(node->left);
        }else{
            return node->parent->val;
        }
    }else{
        return findsecondmax(node->right);
    }
}

int main(){
    node * root = NULL;
    while(true){
        int k;
        cin>>k;
        if(k!=0){
            root=add(k,root);
        }else{
            break;
        }
    }
    cout<<findsecondmax(root)<<endl;
    return 0;
}
