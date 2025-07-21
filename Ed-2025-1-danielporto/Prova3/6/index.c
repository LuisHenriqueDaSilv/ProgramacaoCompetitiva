#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int val;
    struct Node* left;
    struct Node* right;
} Node;

Node* createNode(int val){
    Node* node = malloc(sizeof(Node));
    node->left = NULL;
    node->right = NULL;
    node->val = val;
    return node;
}

Node* insertInSearchBinaryTree(Node* root, int val){
    if(root == NULL){
        return createNode(val);
    } else if(val< root->val ){
        root->left = insertInSearchBinaryTree(root->left, val);
    } else {
        root->right = insertInSearchBinaryTree(root->right, val);
    }

    return root;
}

void postOrder(Node* root){
    if(root == NULL) return;
    postOrder(root->left);
    postOrder(root->right);
    printf("%d ", root->val);
}

int main(){
    int n, current;
    Node* root = NULL;
    scanf("%d", &n);
    while(n--){
        scanf("%d", &current);
        root = insertInSearchBinaryTree(root, current);
    }

    postOrder(root);
    printf("\n");

    return 0;
}