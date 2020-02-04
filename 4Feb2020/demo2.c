#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
    int data;
    struct Node *left,*right;
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

int maxHeight(Node *rootNode){

    if(rootNode == NULL){
        return 0;
    }

    int leftHeight = maxHeight(rootNode->left);
    int rightHeight = maxHeight(rootNode->right);

    if(leftHeight > rightHeight){
        return (leftHeight+1);
    }
    else{
        return (rightHeight+1);
    }
}

int getWidth(Node *rootNode,int level){
    if(rootNode == NULL){
        return 0;
    }
    if(level == 1){
        return 1;
    }
    else{
        return (getWidth(rootNode->left,level-1)+getWidth(rootNode->right,level-1));
    }
}


int getMaxWidth(Node *rootNode){
    int height = maxHeight(rootNode);
    int max = 0;
    for( int i=1 ; i<=height ; i++){
        int width = getWidth(rootNode,i);
        if(width > max){
            max = width;
        }
    }

    return max;
}



int main(){
    createBST(10);
    insertNode(root,7);
    insertNode(root,20);
    insertNode(root,17);
    insertNode(root,45);
    insertNode(root,16);
    insertNode(root,39);
    insertNode(root,9);

    printf("Width = %d\n",getMaxWidth(root));

    return 0;
}