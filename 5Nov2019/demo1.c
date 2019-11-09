#include<stdio.h>




int countZero(int num, int c){
    if(num == 0)
        return c;
    
    if(num%10 == 0){
        c++;
    }
    return countZero(num/10,c);
}


int main(){
    int num = 203040;
    int c =0;
    int count = countZero(num,c);

    printf("Count  = %d\n",count);

    return 0;
}