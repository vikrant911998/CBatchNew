#include<stdio.h>
#include<stdlib.h>
//ADT -> Abstract Data Type

typedef struct Stack{
    int capacity;
    int top;
    int *arr;
}Stack;

"{a+[b+(c)]-e+[d]}"


Stack* createStack(int capacity){
    Stack *s;
    s->capacity = capacity;
    s->top = -1;
    s->arr = (int *)calloc(capacity,sizeof(int));
    return s;
}


void push(Stack *s,int element){
    if(s->top == s->capacity-1){
        printf("Stack Overflow\n");
        return ;
    }
    s->top++;
    s->arr[s->top] = element;
}

int pop(Stack *s){
    if(s->top == -1){
        printf("Stack UnderFlow\n");
        return 0;
    }
    return (s->arr[s->top--]);
}

int isEmpty(Stack *s){
    return (s->top == -1);
}

int peek(Stack *s){
    if(isEmpty(s))
        return 0;
    return s->arr[s->top];
}
int main(){
    printf("Enter the capacity of the stack\n");
    int capacity=0;
    scanf("%d",&capacity);
    Stack *s1 = createStack(10);
    push(s1,10);
    push(s1,20);
    push(s1,30);
    push(s1,40);
    
    while(!isEmpty(s1)){
        printf("Popped = %d \n",pop(s1));
    }
    return 0;
}