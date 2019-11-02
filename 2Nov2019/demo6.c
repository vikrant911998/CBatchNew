#include<stdio.h>

int main(){
    int a[5]={10,20,30,40,50};

    int i=0,j=4;
    while(i<j){
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        i++;
        j--;
    }

    for(i=0;i<5;i++){
        printf("%d ",a[i]);
    }

    return 0;
}