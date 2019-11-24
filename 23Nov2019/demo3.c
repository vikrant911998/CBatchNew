#include<stdio.h>
// 1,2,3,4,5->1,2,1,4,5
// 5,1,2,3,4
// 4,5,1,2,3

int main(){
    int a[5]= {21,3,1,54,9};
    int first = a[0];
    int second = a[0];
    int i;

    for(i =0 ;i<5;i++){
        if(a[i]<first){
            second = first;
            first = a[i];
        }

        if(a[i]<second && a[i] != first){
            second = a[i];
        }
    }

    printf("First Small = %d and Second Small = %d\n",first,second);

    return 0;
}