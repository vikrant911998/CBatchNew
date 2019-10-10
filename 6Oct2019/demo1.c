#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
    int data;
    struct Node *next;
}Node;


Node* createList();
void printNode(Node *);
int length(Node *);
void findValue(Node *, int);


int main(){
    Node *head=createList();
    printNode(head);
    int l = length(head);

    printf("Length : %d\n",l);
    findValue(head,2);
    return 0;
}

void findValue(Node *head,int i){
    int index=0;

    while(index<i){
        head = head->next;
        index++;
    }
    printf("Value : %d\n",head->data);
}

int length(Node *head){
    int i=0;
    while(head != NULL){
        i++;
        head = head->next;
    }
    return i;
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