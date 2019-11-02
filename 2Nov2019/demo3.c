#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
    int data;
    struct Node *next;
}Node;

Node* createList();
void printNodes(Node *);
Node * insertNode(Node *,int ,int);

int main(){
    Node *head=createList();
    printNodes(head);
    printf("***********\n");
    Node *newHead = insertNode(head,4,100);
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
    temp->next = head;
    return head;
}