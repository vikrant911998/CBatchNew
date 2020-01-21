#include<stdio.h>
#include<stdlib.h>




typedef struct Node{
    int data;
    struct Node *left;
    struct Node *right;
}Node;

Node *root = NULL;

void createBST(int data){
    root = (Node *)malloc(sizeof(Node));
    root->data = data;
    root->left = NULL;
    root->right = NULL;
}



void insertNode(Node *rootNode,int data){

    Node *temp = (Node *)malloc(sizeof(Node));
    temp->data = data;
    temp->left = NULL;
    temp->right = NULL;
 
    if( rootNode->left == NULL && data < rootNode->data ){
        rootNode->left = temp;
    }
    else if( rootNode->right == NULL && data > rootNode->data ){
        rootNode->right = temp;
    }
    else if( data < rootNode->data ){
        insertNode( rootNode->left , data );
    }
    else{
        insertNode( rootNode->right , data );
    }

}

void Inorder(Node *rootNode){
    if(rootNode == NULL){
        return;
    }

    Inorder(rootNode->left);

    printf("%d  ",rootNode->data);

    Inorder(rootNode->right);
}





int main(){

    createBST(20);
    
    insertNode(root,10);
    insertNode(root,21);
    insertNode(root,7);
    insertNode(root,11);
    insertNode(root,9);

    

    return 0;
}


