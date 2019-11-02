#include<stdio.h>

// a[10] = {1,2,3,4,5}->{100,1,2,3,4,5}
int main(){
    //Declaration
    int a[5];
    

    //Initialization
    int b[] = {1,2,3,4};

    //Declaration and Initialization
    int c[5] = {1,2,3,4,5};

    int i=0;

    for(i=0;i<5;i++){
        printf("%d ",c[i]);
    }

    return 0;
}