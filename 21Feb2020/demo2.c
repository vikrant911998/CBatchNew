//Collision Handling -> Separate Chaining

#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
    int data;
    struct Node *next;
}Node;

Node * createNode(int data){
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;

    return newNode;
}

int main(){
    int a[5] = {32,45,15,67,91};
    Node *b[6];
    int i=0,mod = 0;
    
    for(i =0 ;i<6;i++){
        b[i]=  NULL;
    }

    for(i=0;i<5;i++){
        Node *newNode = createNode(a[i]);
        mod = a[i]%5;

        if( b[ mod ] == NULL ){
            b[mod] = newNode;
        }
        else{
            
        }

    }

    return 0;
}