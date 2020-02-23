//Collision Handling -> Linear Probing
#include<stdio.h>


int main(){
    int a[5] = {234,1995,2010,347,253};
    int b[10] = {0};
    int i=0,j=0,temp = 0,index = 0;

    for(i=0;i<5;i++){
        j=0;
        temp = a[i]%5;
        index = temp+j;

        while(b[ index ] != 0 ){
            j++;
            index = temp+j;
        }
        b[index] = a[i];
    }

    j=0;
    int num = 1995;
    temp = num%5;
    index = temp+j;

    while(b[index] != num){
        j++;
        index = temp+j;
    }

    printf("Element = %d\n",b[index]);



    return 0;
}