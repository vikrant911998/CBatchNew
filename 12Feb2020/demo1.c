#include<stdio.h>

int main(){
    
    int a[10] = {5, 1, 4, 2, 8, 3, 2,61,23 ,9};
    int i,j,temp;

    for(i=0;i<10;i++){
        temp = a[i];
        j = i-1;

        while(j>=0 && a[j] > temp){
            a[j+1] = a[j];
            j--;
        }

        a[j+1] = temp;
    }

    for(i=0;i<10;i++){
        printf("%d  ",a[i]);
    }


    return 0;
}