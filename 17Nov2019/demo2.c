#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
    int data;
    struct Node *next;
    struct Node *prev;
}Node;

Node* createList();
void printNodes(Node *);
Node * deleteNode(Node *,int );

int main(){
    Node *head=createList();
    printNodes(head);
    printf("***********\n");
    Node *newHead = deleteNode(head,3);
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

Node * deleteNode(Node *head,int index){
    Node *temp = head;

    if(index == 0){
        head = head->next;
        head->prev = NULL;
    }
    else{
        int count =0 ;
        while(count<index-1){
            temp = temp->next;
            count++;
        }
        Node *temp1 = temp->next->next;

        temp->next = temp1;
        if(temp1 != NULL){
            temp1->prev = temp;
        }

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