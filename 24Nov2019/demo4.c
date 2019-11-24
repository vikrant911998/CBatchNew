#include<stdio.h>

int main(){
    int a[5]= {23,14,56,12,9};
    int i,j,temp=0;

    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if(a[i]<a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    for(i=0;i<5;i++){
        printf("%d ",a[i]);
    }

    return 0;
}