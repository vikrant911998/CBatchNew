//Double Hashing Method.
#include<stdio.h>

int hash1(int value,int size){
    return (value%size);
}

int hash2(int value,int size){
    return (size- (value%size));
}

int main(){ 
    int a[5]={19,34,67,23,56};
    int b[20] = {0};
    int i=0,index =0,j=1;

    for(i=0;i<5;i++){
        index = hash1(a[i],5);

        if(b[index] == 0){
            b[index] = a[i];
        }
        else{
            while(b[index] !=0){
                index = (hash1(a[i],5)+ j*hash2(a[i],7))%5;
                j++;
            }
            b[index ] = a[i];
        }
    }   



    return 0;
}