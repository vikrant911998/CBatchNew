#include<stdio.h>
int fact(int);

int main(){

    int result = fact(5);
    printf("The factorial is %d",result);
    return 0;
}

int fact(int a){
    int temp=1;
    if(a==1)
        return 1;
    temp = a*fact(a-1);
    return temp;
}

// 5*fact(4)
// 5*4*fact(3)