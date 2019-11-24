#include<stdio.h>
 
int main(){
    int a[5]={10,20,30,40,50};
    int i=1,j=0,k=0;
    int temp =0;

    while(i<6){
        temp = a[4];

        for(j=4;j>0;j--){
            a[j] = a[j-1];
        }
        a[0] = temp;

        for(k=0;k<5;k++){
            printf("%d ",a[k]);
        }
        printf("\n");

        i++;
    }

    

    return 0;
}