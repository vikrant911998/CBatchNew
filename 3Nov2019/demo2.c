#include<stdio.h>

int reverse(int *p,int size,int index, int count){

    if(index == size-1 && p[index] == 0){
        return ++count; 
    }

    if(index == size-1){
        return count;
    }

    if(p[index] == 0)
        ++count;
    
    return reverse(p,size,index+1,count);
}


int main(){
    int a[6] = {1,0,3,0,5,0};
    int size = 6;
    int count = reverse(a,size,0,0);
    printf("Count : %d\n",count);


    return 0;
}