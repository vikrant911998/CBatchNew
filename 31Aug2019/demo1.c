#include<stdio.h>
void input(int,int);
void display(int,int);

int main(){
    int id=0,marks=0;
    input(id,marks);
    // display(id,marks);
    return 0;
}

void input(int id, int marks){
    printf("Enter the id \n");
    scanf("%d",&id);
    printf("Enter the Marks \n");
    scanf("%d",&marks);


    display(id,marks);
}

void display(int a, int b){
    printf("The id is %d\n",a);
    printf("The marks is %d\n",b);

}