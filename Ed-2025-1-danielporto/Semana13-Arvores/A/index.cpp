#include <iostream>
using namespace std;

struct Node {
    int val;
    Node* left;
    Node* right;

    Node(int v){
        val = v;
        left = nullptr;
        right = nullptr;
    }
};

Node* insert(Node* root, int val){
    if(!root){
        return new Node(val);
    }
    if(val < root->val){
        root->left = insert(root->left, val); 
    } else {
        root->right = insert(root->right, val);
    }
    return root;
}

void pos_ordem(Node* root){
    if(!root){
        return;
    }
    pos_ordem(root->left);
    pos_ordem(root->right);
    cout << root->val << " ";
}

int main(){

    Node* root = nullptr;
    int n, val;
    cin >> n;

    for(int i = 0; i<n; i++){
        cin >> val;
        root = insert(root, val);
    }

    pos_ordem(root);
    cout << "\n";

    return 0;
}