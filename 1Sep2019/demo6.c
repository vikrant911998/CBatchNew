#include<stdio.h>

int main(){
    int a[10] = {3,5,6,12,23,7,10,42,14,11};
    int number = 22;
    int i=0,j=0;
    for(i=0;i<9;i++){

        for(j=i+1;j<10;j++){

            if(a[i]+a[j] == number)
                printf("[ %d , %d ]",a[i],a[j]);
        }
    }

    return 0;
}