//Merge Sort

#include<stdio.h>


void merge(int *a,int left, int middle , int right){
    int i,j,k;
    int n1 = middle-left+1;
    int n2 = right-middle;

    int L[n1],R[n2];

    for(i=0;i<n1;i++){
        L[i] = a[left+i];
    }

    for(j=0;j<n2;j++){
        R[j] = a[middle+1+j];
    }

    i=0,j=0,k=left;


    while(i<n1 && j<n2){
        if(L[i] < R[j]){
            a[k] = L[i];
            k++;
            i++;
        }
        else{
            a[k] = R[j];
            k++;
            j++;
        }
    }

    while(i<n1){
        a[k] = L[i];
        k++;
        i++;
    }

    while(j<n2){
        a[k] = R[j];
        k++;
        j++;
    }


}


void mergeSort(int *a,int left, int right){
    if(left < right){
        int middle = (left+right)/2;

        mergeSort(a,left,middle); //(a,0,0)->38
        mergeSort(a,middle+1,right); //(a,1,1)->27


        merge(a,left,middle,right);
    }
}

int main(){
    int a[7] = {38,27,43,3,9,82,10};

    mergeSort(a,0,6);
    int i=0;
    printf("Merge Sorted Array elements:\n");
    for(i=0;i<7;i++){
        printf("%d  ",a[i]);
    }
    printf("\n");

    return 0;
}





//union and intersection of two sorted linked list.