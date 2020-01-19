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

int IterativeSearch(Node *rootNode, int data){
    
    while(rootNode != NULL){

        if(data < rootNode->data){
            rootNode = rootNode->left;
        }
        else if(data > rootNode->data){
            rootNode = rootNode->right;
        }
        else{
            return 1;
        }
    }
    return 0;
}


int RecursiveSearch(Node *rootNode, int data){
    if(rootNode == NULL){
        return 0;
    }
    else if(rootNode->data == data){
        return 1;
    }
    else if(rootNode->data > data){
        return RecursiveSearch(rootNode->left,data);
    }
    else{
        return RecursiveSearch(rootNode->right,data);
    }
}


int main(){

    createBST(20);
    int value =0;
    // printf("Enter the Value for the Node\n");
    // scanf("%d",&value);
    insertNode(root,10);
    insertNode(root,21);
    insertNode(root,7);
    insertNode(root,11);
    insertNode(root,9);

    // Inorder(root);

    // if(IterativeSearch(root,19)){
    //     printf("Element Found \n");
    // }
    // else{
    //     printf("Element Not Found\n");
    // }

    if(RecursiveSearch(root,9)){
        printf("Element Found \n");
    }
    else{
        printf("Element Not Found\n");
    }

    


    

    return 0;
}


