#include<stdio.h>

int main(){
    int a=5;   //5100->5
    //pointer declaration
    int *p ;
    p = &a;//5100
    *p = 10;// 5100 -> 5 -> 10
    // *p -> *&a -> a -> 5
    printf("%d\n",p);
    printf("%d\n",*p);


    return 0;
}