#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
    int data;
    struct Node *next;
}Node;

Node* createList();
void printNodes(Node *);
int midpoint(Node *);


int main(){
    Node *head=createList();
    printNodes(head);
    
    printf("Mid point : %d\n",midpoint(head));
    return 0;
}

int midpoint(Node* head){
    Node *fast = head;
    Node *slow = head;

    while(fast->next != NULL && fast->next->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow->data;
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