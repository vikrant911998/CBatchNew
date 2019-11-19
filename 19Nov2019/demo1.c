#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
    int data;
    struct Node *next;
    struct Node *prev;
}Node;

Node* createList();
void printNodes(Node *);
Node *getLast(Node *);
Node *insertNode(Node *,int ,int);

int main(){
    Node *head=createList();
    printNodes(head);
    printf("***********\n");
    Node *newHead = insertNode(head,0,100);
    printNodes(newHead);
    return 0;
}

void printNodes(Node *head){
    Node *temp = head;

    do{
        printf("%d ",temp->data);
        temp = temp->next;
    }while(temp != head);
    
}

Node * getLast(Node *head){
    Node *temp = head;

    while(temp->next != head){
        temp = temp->next;
    }
    return head;
}

Node * insertNode(Node *head,int index, int element){
    Node *temp = head;
    Node *last = getLast(head);
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = element;
    newNode->prev =NULL;
    newNode->next = NULL;


    if(index == 0){
        head = newNode;
        newNode->next = temp;
        temp->prev = newNode;

        last->next = head;
        newNode->prev = last;


        // head = newNode;
        // newNode->next = temp;
        // temp->prev = newNode;
        // last->next = head;
        // newNode->prev = last;
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

    temp->next = head;
    head->prev = temp;
    
    return head;
}