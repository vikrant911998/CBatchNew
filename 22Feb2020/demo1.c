//Collision Handling -> Separate Chaining 
#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
    int data;
    struct Node *next;
}Node;

Node * createNode(int data){
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;

    return newNode;
}

int main(){
    int a[5] = {34,59,51,46,112};
    Node *b[6];
    Node *temp1;
    int temp;
    int size = 5,i=0;

    for(i=0;i<6;i++){
        b[i] = NULL;
    }

    for(i=0;i<5;i++){
        Node *newNode = createNode(a[i]);
        
        temp = a[i]%size;

        if(b[ temp ] == NULL){
            b[ temp ] = newNode;
        }
        else{
            temp1 = b[ temp ];
            while(temp1->next != NULL){
                temp1 = temp1->next;
            }
            temp1->next = newNode;
        }
    }


    int num = 0;

    printf("Enter the Number\n");
    scanf("%d",&num);
    temp = num%size;

    temp1 = b[ temp ];
    while(temp1 != NULL){
        if(temp1->data == num){
            printf("Element = %d\n",temp1->data);
            break;
        }
        temp1 = temp1->next;
    }

    return 0 ;
}
