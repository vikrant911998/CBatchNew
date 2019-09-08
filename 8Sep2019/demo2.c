#include<stdio.h>

int main(){

    int a=21,b=31,c=4;
    int *p1=&a, *p2=&b, *p3=&c;

    if(*p1>*p2 && *p1>*p3)
        printf("%d is maximum\n",a);
    else if(*p2 > *p3){
        printf("%d is maximum\n",b);
    }
    else
    {
            printf("%d is maximum\n",c);
    }
    


    return 0;
}