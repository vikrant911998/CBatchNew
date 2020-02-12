#include<stdio.h>

int main(){
    int a1[5] = {1,3,5,7,9};
    int a2[4] = {2,4,6,8};
    int a3[9];
    int i=0,j=0,k=0;

    while(i<5 && j<4){
        if(a1[i] < a2[j]){
            a3[k] = a1[i];
            i++;
            k++;
        }
        else{
            a3[k] = a2[j];
            j++;
            k++;
        }
    }

    while(i<5){
        a3[k] = a1[i];
        i++;
        k++;
    }

    while(j<4){
        a3[k] = a2[j];
        j++;
        k++;
    }


    for(i=0;i<9;i++){
        printf("%d  ",a3[i]);
    }


    return 0;
}