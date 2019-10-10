#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
    int data;
    struct Node *next;
}Node;


Node* createList();
void printNode(Node *);
Node * insertNode(Node *,int , int );


int main(){
    Node *head=createList();
    printNode(head);
    Node *newHead = insertNode(head,2,45);
    printf("Linked list after\n");
    printNode(newHead);
    return 0;
}

Node * insertNode(Node *head, int i, int element){
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = element;
    Node *temp = head;

    if(i==0){
        head = newNode;
        newNode->next = temp;
    }
    else{
        Node *temp1 = NULL;
        int index =0;


        while(index<i-1){
            index++;
            temp = temp->next;
        }
        temp1 = temp->next;
        temp->next = newNode;
        newNode->next = temp1;
    }
    return head;
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
        newNode->data = value;//20

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