#include<stdio.h>
#include<stdlib.h>
Node* createList();
void printNode(Node *);

typedef struct Node{
    int data;
    struct Node *next;
}Node;

int main(){
    Node *head=createList();
    printNode(head);

    return 0;
}

void printNode(Node *h){
    while(h != NULL){
        printf("%d  ",h->data);
        h =  h->next;
    }
}


Node* createList(){
    Node *head = NULL;
    Node *temp = NULL;
    int value ;
    printf("Enter the values of linked list");
    scanf("%d",&value);

    while(value != -1){
        Node *newNode = (Node *)malloc(sizeof(Node));
        newNode->data = value;

        if(head == NULL){
            head = newNode;
            temp = newNode;
        }
        else{
            temp->next = newNode;
            temp = newNode;
        }

        scanf("%d",&value);
    }
    return head;
}