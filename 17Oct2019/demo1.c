#include<stdio.h>

int factorial(int n){
    if(n==1)
        return 1;
    
    int temp = n*factorial(n-1);
    return temp;
}

int main(){
    int result = factorial(5);
    
    printf("Result : %d\n",result);
    return 0;
}