#include<stdio.h>

int main(){
    //declaration and initialization
    int a = 8,i=0;

    int s[5];
    int f[10] = {1,2,3,4,5,6,7,8,9,11};

    printf("Enter the array elements\n");
    
    for(i=0;i<5;i++){
        scanf("%d",&s[i]);
    }

    printf("\nArray Elements are :\n");
    for(i=0;i<10;i++){
        printf("%d  ",f[i]);
    }
    printf("\n");



    return 0;
}