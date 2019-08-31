#include<stdio.h>
int input();
void display(int);

int main(){

    int id=0;
    id = input();
    //Calling site of function.
    display(id);//id is actual argument or parameter.

    return 0;
}

int input(){
    int id=0;
    printf("Enter the id \n");
    scanf("%d",&id);
    return id;
    // swap(a,b);
}

void display(int id){//id is formal argument.
    printf("THe id is %d\n",id);
}