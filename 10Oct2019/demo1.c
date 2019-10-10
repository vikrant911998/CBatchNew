#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
    int data;
    struct Node *next;
}Node;


Node* createList();
void printNode(Node *);
int length(Node *);


int main(){
    Node *head=createList();
    printNode(head);
    printf("Length : %d\n",length(head));
 
    
    return 0;
}


int length(Node *head){
    int count =0;
    
    while(head != NULL){
        count++;
        head = head->next;
    }

    return count;
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