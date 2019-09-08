#include<stdio.h>
void swap(int *, int *);


int main(){
    int a=2,b=5;
    swap(&a,&b);//swap(2000,3000)


    printf("a=%d and b =%d",a,b);
    return 0;   
}

void swap(int *p,int *m){//(2000,3000)
    int temp = *p; //2 //temp = 2000 ->2
    // printf("%d\n",temp);
    *p = *m; // 3 // 2000->2 = 3000->5 ->2000->5
    *m = temp;//2
}