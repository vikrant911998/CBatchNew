//Collision Handling -> Direct Access Method
#include<stdio.h>

int main(){
    int a[5] = {12,-12,5,4,-3};
    int b[13][2] = {0};
    int i=0;

    for(i=0;i<5;i++){
        if( a[i] < 0 ){
            b[ -(a[i]) ][1] = a[i] ;
        }
        else{
            b[ a[i] ][0] = a[i];
        }
    }

    int num = 12;

    if(num < 0 &&  b[-(num)][1] == num){
       printf("Element Exists\n"); 
    }
    else if(num > 0 && b[num][0] == num ) {
        printf("Element Exists\n"); 
    }
    else
    {
        printf("Element doesn't exists\n");
    }
    



    return 0;
}
