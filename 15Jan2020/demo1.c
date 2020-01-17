#include<stdio.h>
#include<stdlib.h>

typedef struct Stack{
    int top;
    int capacity;
    int *arr;
}Stack;

Stack *stack = NULL;

void createStack(int capacity){

    stack = (Stack *)malloc(sizeof(Stack));
    stack->capacity = capacity;
    stack->top = -1;
    stack->arr = (int *)calloc(capacity,sizeof(int));

}

void push(int data){
    if(stack->top == stack->capacity-1){
        printf("Stack Overflow\n");
    }
    else{
        stack->top++;
        stack->arr[stack->top] = data;
    }
}


int pop(){
    int temp;
    if(stack->top == -1){
        printf("Stack Underflow\n");
        return 0;
    }
    else{
        temp = stack->arr[stack->top];
        stack->arr[stack->top] = 0;
        stack->top--;
    }
    return temp;
}

void display(){
    int i =0;
    for(i=stack->top ; i>=0 ; i--){
        printf("%d  ",stack->arr[i]);
    }
}





int main(){
    createStack(10);
    int n;

    printf("Enter the value of N\n");
    scanf("%d",&n);

    push(100);
    push(200);
    push(300);
    push(400);
    push(500);
    push(600);
    push(700);
    push(800);
    display();
    int sum=0,i;

    for(i=1;i<=n;i++){
        sum = sum+pop();
    }

    printf("SUM = %d\n",sum);
    display();



    return 0;
}