#include<stdio.h>
#include<stdlib.h>

typedef struct Stack{
    int capacity;
    int top;
    int *arr;
}Stack;

Stack* createStack(int);

int main(){
    Stack *s1 = createStack(10);
    

    return 0;
}