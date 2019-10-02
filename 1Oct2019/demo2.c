#include<stdio.h>

int main(){
    int a[7]={11,23,5,17,20,5,19};

    int i=0,j=0;

    for(i=0;i<6;i++){
        for(j=i+1;j<7;j++){

            if(a[i]==a[j])
                printf("%d\n",a[i]);

        }
    }

    return 0;
}

// 1,2,3,4,5
// 120,60,40,30,24