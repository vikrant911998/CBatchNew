#include<stdio.h>
#include<stdbool.h>

bool binarySearch(int *a,int lower, int upper,int element){

    if(lower>upper){
        return false;
    }

    int mid = (lower+upper)/2;

    if(a[mid] == element){
        return true;
    }

    if(element<a[mid]){
        return binarySearch(a,lower,mid-1,element);
    }
    else{
        return binarySearch(a,mid+1,upper,element);
    }
    // return -1;
}

int main(){
    int a[5]={10,20,33,45,56};
    int element = 45;

    bool result = binarySearch(a,0,4,element);

    // printf("Result = %d\n",result);
    if(result){
        printf("Element Found\n");
    }
    return 0;
}