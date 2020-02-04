#include<stdio.h>
#include<stdlib.h>

typedef struct BST{
    int *arr;
    int capacity;
    int lastIndex;
}BST;

BST *root = NULL;

void createBST(int capacity){
    root = (BST *)malloc(sizeof(BST));
    root->capacity = capacity;
    root->arr = (int *)calloc(capacity,sizeof(int));
    root->lastIndex = -1;
}



int main(){
    createBST(10);
    

    return 0;
}