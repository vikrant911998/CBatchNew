//Quick Sort

#include<stdio.h>

void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int *a,int left, int right){
    int pivot = a[right];
    int i = left-1;

    int j=0;

    for(j=left; j<=right-1 ; j++){
        if(a[j] < pivot){
            i++;
            swap(&a[i],&a[j]);
        }
    }

    swap(&a[i+1],&a[right]);
    return i+1;
}

void quickSort(int *a,int left, int right){
    if(left < right){
        int pivot = partition(a,left,right);

        quickSort(a,0,pivot-1);
        quickSort(a,pivot+1,right);
    }
}


int main(){
    int a[7] = {10,80,30,90,40,50,70};

    quickSort(a,0,6);
    int i;
    printf("Quick Sorted Array elements:\n");
    for(i=0;i<7;i++){
        printf("%d  ",a[i]);
    }
    printf("\n");

    return 0;
}