#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
    int data;
    struct Node *next;
}Node;

Node* createList();
void printNodes(Node *);
Node *moveNode(Node *,int value);

int main(){
    Node *head=createList();
    printNodes(head);
    Node *newHead = moveNode(head,2);
    printNodes(newHead);
    return 0;
}

Node * moveNode(Node *head, int value){
    Node* temp1 = head;
    Node * temp2 = head;
    int i = -value;

    while(temp1 != NULL){
        if(i>=0){
            temp2 = temp2->next;
        }

        temp1 = temp1->next;
        i++;
    }
    temp1->next = head;
    head = temp2->next;
    temp2->next = NULL;

    return head;
}

void printNodes(Node *head){
    while(head != NULL){
        printf("%d  ",head->data);
        head = head->next;
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