#include<stdio.h>
void print(int);
//Recursion -> function calls itself.

int main(){

    print(5);
    return 0;
}


void print(int a){
    if(a==1)
        return;
    printf("%d\n",a);
    print(a-1);
    return ;
}