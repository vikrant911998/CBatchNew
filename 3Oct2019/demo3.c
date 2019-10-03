#include<stdio.h>
#include<stdlib.h>

int main(){

    int *arr = (int *)calloc(5,2);

    // *arr = 12;
    // *(arr+1) = 13;

    int i=0;
    for(i=0;i<5;i++){
        *(arr+i) = 5+i;
    }

    for(i=0;i<5;i++){
        printf("%d\n",*(arr+i));
    }


    // int a = 2;
    

    // int *p = (int *)malloc(2);

    // *p = 56;
    // printf("%d\n",p);
    // printf("%d\n",*p);
    return 0;
}