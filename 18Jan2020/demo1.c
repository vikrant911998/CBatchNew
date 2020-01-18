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



int main(){

    createBST(20);
    int value =0;
    printf("Enter the Value for the Node\n");
    scanf("%d",&value);
    // insertNode(root,10);
    // insertNode(root,21);
    // insertNode(root,7);
    // insertNode(root,11);
    // insertNode(root,9);

    while(value != -1){
        insertNode(root,value);
        scanf("%d",&value);
    }


    

    return 0;
}





// Node * createNode(int data){
//     Node *temp = (Node *)malloc(sizeof(Node));
//     temp->data = data;
//     temp->left = NULL;
//     temp->right = NULL;

//     return temp;
// }

// Node *rootNode = createNode(10);

    // rootNode->left = createNode(7);