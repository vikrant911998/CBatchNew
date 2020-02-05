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


void insertValue(int value){
    if(root->lastIndex == root->capacity-1){
        printf("Array is full\n");
        return;
    }

    root->lastIndex++;
    root->arr[root->lastIndex] = value;
}

void display(){
    int i=0;
    for(i=0 ;i<=root->lastIndex ;i++){
        printf("%d  ",root->arr[i]);
    }
}



int main(){
    createBST(10);
    insertValue(23);    
    insertValue(24);
    insertValue(57);
    insertValue(19);
    insertValue(5);
    display();

    return 0;
}