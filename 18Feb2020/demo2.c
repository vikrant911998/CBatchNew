//Subtraction Method ->Hashing Method

#include<stdio.h>

int main(){
    int a[5] = {1950,1830,2100,1700,2010};
    int b[400] = {0};
    int number = 2000;
    int i=0;

    for(i=0;i<5;i++){
        int temp = a[i]- number;

        if(temp < 0){
            temp = -temp;
        }

        b[temp] = a[i];
    }

    int k = 1830;
    int t = k-number;
    if(t < 0 ){
        t = -t;
    }

    printf("Element = %d\n",b[t]);

    return 0;
}
