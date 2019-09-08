#include<stdio.h>

int main(){
    int a=3,b=3,i=1;

    int result =1;
    for(i=1;i<=b;i++){
        result = result*a;
    }
    printf("%d\n",result);

    return 0;
}