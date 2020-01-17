#include<stdio.h>

int main(){
    int a = 2;
    int *ptr = &a;

    int **p = &ptr;

    printf("%d\n",a);
    printf("%d\n",*ptr);
    printf("%d\n",&a);
    printf("%d\n",ptr);

    printf("%d\n",&ptr);
    printf("%d\n",p); 
    printf("%d\n",*p);   

    return 0;
}