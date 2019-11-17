#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
    int data;
    struct Node *next;
    struct Node *prev;
}Node;

Node* createList();
void printNodes(Node *);
Node * insertNode(Node *,int ,int);

int main(){
    Node *head=createList();
    printNodes(head);
    printf("***********\n");
    Node *newHead = insertNode(head,3,100);
    printNodes(newHead);
    return 0;
}

void printNodes(Node *head){
    Node *temp = head;

    while(temp != NULL){
        printf("%d ",temp->data);
        temp = temp->next;
    }
    
}

Node* insertNode(Node *head,int index, int element){
    Node *temp = head;

    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = element;
    newNode->prev = NULL;
    newNode->next = NULL;

    if(index == 0){
        head = newNode;
        newNode->next = temp;
        temp->prev = newNode;
    }
    else{
        int count =0;
        while(count<index-1){
            temp = temp->next;
            count++;
        }
        Node *temp1 = temp->next;
        temp->next = newNode;
        newNode->prev = temp;
        newNode->next =temp1;
        if(temp1 != NULL)
            temp1->prev = newNode;
    }

    return head;
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
        newNode->next = NULL;
        newNode->prev = NULL;

        if(head == NULL){
            head = newNode;
            temp = newNode;
        }
        else{
            temp->next = newNode;
            newNode->prev = temp;
            temp = newNode;
        }

        scanf("%d",&value);
    }
    
    return head;
}