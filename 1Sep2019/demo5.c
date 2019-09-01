#include<stdio.h>

int main(){
    int a[5]={1,2,3,4,5};
    int i=0,j=4;

    for(i=0;i<j;i++){
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        j--;
    }

    for(i=0;i<5;i++){
        printf("%d  ",a[i]);
    }
    printf("\n");


    return 0;
}