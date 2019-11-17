#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
    int data;
    struct Node *next;
}Node;

Node* createList();
void printNodes(Node *);
Node *getLast(Node *);
Node *insertNode(Node *,int ,int);

int main(){
    Node *head=createList();
    printNodes(head);
    printf("***********\n");
    Node *newHead = insertNode(head,3,100);
    printNodes(newHead);
    return 0;
}

Node * getLast(Node *head){
    Node *temp = head;

    while(temp->next != head){
        temp= temp->next;
    }

    return temp;
}

Node * insertNode(Node *head,int index, int element){
    Node *temp = head;
    Node *last = getLast(head);

    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = element;
    newNode->next = NULL;

    if(index == 0){
        head = newNode;
        newNode->next = temp;
        last->next = head;
    }
    else{
        int count = 0;
        while(count <index-1){
            temp= temp->next;
            count++;
        }
        Node *temp1 = temp->next;
        temp->next = newNode;
        newNode->next = temp1;

    }

    return head;
}

void printNodes(Node *head){
    Node *temp = head;

    do{
        printf("%d ",temp->data);
        temp = temp->next;
    }while(temp != head);
    
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
    temp->next = head;
    
    return head;
}