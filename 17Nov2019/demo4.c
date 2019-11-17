#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
    int data;
    struct Node *next;
}Node;

Node* createList();
void printNodes(Node *);
Node *getLast(Node *);
Node *deleteNode(Node *,int);

int main(){
    Node *head=createList();
    printNodes(head);
    printf("***********\n");
    Node *newHead = deleteNode(head,3);
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

Node * deleteNode(Node *head, int index){
    Node *temp = head;
    Node *last = getLast(head);

    if(index == 0){
        head = head->next;
        last->next = head;
    }
    else{
        int count =0;
        while(count <index-1){
            temp = temp->next;
            count++;
        }
        Node *temp1 = temp->next->next;
        temp->next = temp1;
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