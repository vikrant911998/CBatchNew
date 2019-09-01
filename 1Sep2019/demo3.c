#include<stdio.h>

int main(){
    
    int f[10] = {1,2,3,4,5,6,7,8,9,11};
    int b = 9;

    for(i=0;i<10;i++){
        if(f[i] == b){
            printf("Element Found\n");
        }
        else{
            printf("Element not Found\n");
        }
    }
    printf("\n");



    return 0;
}