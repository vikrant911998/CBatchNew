#include<stdio.h>

int main(){
    int a[6]={12,23,34,45,56};//{100,12,23,34,45,56}
    int element = 100;
    int i=0;
    for(i=5;i>0;i--){
        a[i] = a[i-1];
    }
    a[0] = element;

    for(i=0;i<6;i++){
        printf("%d ",a[i]);
    }

    return 0;
}