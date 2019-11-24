#include<stdio.h>

int main(){
    
    int a[5] = {11,22,33,44,55};
    int element = 45;
    int i=0,l=0,u=4,m=0;

    for(i=0;i<5;i++){
        if(l>u){
            printf("Element Not Found\n");
            break;
        }

        m = (l+u)/2;
        if(a[m] == element){
            printf("Element Found\n");
            break;
        }

        if(a[m] > element){
            u = m-1;
        }
        else{
            l = m+1;
        }
    }
    
    return 0;
}