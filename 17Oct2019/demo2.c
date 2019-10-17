#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
    int data;
    struct Node *next;
}Node;

Node* createList();
void reverse(Node *);

int main(){
    Node *head=createList();
    reverse(head);
    return 0;
}

void reverse(Node *head){
    if(head == NULL){
        return;
    }

    reverse(head->next);
    printf("%d\n",head->data);
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