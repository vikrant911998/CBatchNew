// 1,0,0,1,1,0 ->0,0,0,1,1,1

//12300300202
#include<stdio.h>

int main(){
    int a[5] = {1,0,1,0,0};
    int count =0,i ;
    for(i=0;i<5;i++){
        if(a[i]==0)
            count++;//3
    }

    for(i=0;i<5;i++){
        if(i<count)
            a[i]=0;
        else 
            a[i] = 1;
    }

    for(i=0;i<5;i++){
        printf("%d ",a[i]);
    }
    return 0;
}