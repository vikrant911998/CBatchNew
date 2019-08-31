#include<stdio.h>
void area(int,int);


int main(){
    int l=0,b=0;
    printf("Enter the length and breadth of rectangle\n");
    scanf("%d %d",&l,&b);
    
    area(l,b);


    return 0;
}

void area(int l,int b){
    int a = l*b;
    printf("The area of rectangle is %d\n",a);
}