#include<stdio.h>
#include<stdbool.h>

void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}


int main(){
    int a[10] = {5, 1, 4, 2, 8, 3, 2,61,23 ,9};
    int start = 0;
    int end = 9;
    bool swapped = true;
    int i=0,j=0;

    while(swapped){
        
        swapped = false;

        for(i=start ; i<end ; i++){
            if( a[i] > a[i+1] ){
                
                swap( &a[i] , &a[i+1] );
                swapped = true;
            }
        }

        if(!swapped){
            break;
        }

        end--;

        swapped = false;

        for(i=end-1 ; i>=start ; i--){
            if(a[i] > a[i+1]){
                swap( &a[i] , &a[i+1] );
                swapped = true;
            }
        }

        start++;
    }

    for( i=0 ; i<10 ; i++){
        printf("%d   ",a[i]);
    }

    return 0;
}