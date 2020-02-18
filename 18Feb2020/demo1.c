//Direct Method ->Hashing Method

#include<stdio.h>

int main(){
    int a[5] = {12,13,5,7,20};
    int b[21] = {0};
    int i=0;

    for(i=0;i<5;i++){
        b[ a[i] ] = a[i];//b[12]=12
    }

    if( b[12] == 12){
        printf("Element Exists\n");
    }
    else{
        printf("Element not Exists\n");
    }



    return 0;
}
