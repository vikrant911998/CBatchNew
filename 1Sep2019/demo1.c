#include<stdio.h>
void add();
void sub();
void mul();
void div();

int main(){

    int choice=0;

    printf("1.Add\n2.Subtraction\n3.Multiplication\n4.Division");
    printf("\nEnter your choice\n");
    scanf("%d",&choice);


    switch(choice){
        case 1:add();
            break;
        case 2:sub();
            break;
        case 3:mul();
            break;
        case 4:div();
            break;
        default:printf("Invalid Choice\n");
            break;
    };

    return 0;
}

void add(){
    printf("Add function called\n");
}
void sub(){
    printf("Sub function called\n");
}
void mul(){
    printf("Mul function called\n");
}
void div(){
    printf("Div function called\n");
}