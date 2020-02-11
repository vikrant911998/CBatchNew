//Max Heap Deletion

#include<stdio.h>
#include<stdlib.h>

typedef struct MaxHeap{
    int *arr;
    int capacity;
    int lastIndex;
}MaxHeap;

MaxHeap *root = NULL;

int parent(int index){
    return((index-1)/2);
}

int left(int index){
    return ((2*index) + 1);
}

int right(int index){
    return ((2*index) + 2);
}

void swap(int i, int j){
    int temp = root->arr[i];
    root->arr[i] = root->arr[j];
    root->arr[j] = temp;
}

void createMaxHeap(int capacity){
    root = (MaxHeap *)malloc(sizeof(MaxHeap));
    root->capacity = capacity;
    root->lastIndex = -1;
    root->arr = (int *)calloc(capacity,sizeof(int));
}

void insertValue(int data){
    if( root->lastIndex == root->capacity-1 ){
        printf("Heap is Full\n");
        return ;
    }

    root->lastIndex++;
    root->arr[root->lastIndex] = data;
    int index = root->lastIndex;

    while(index !=0 && root->arr[parent(index)] < root->arr[index] ){
        swap( index , parent(index) );
        index = parent(index);
    }
}

void balance(int *arr,int n,int i){
    int rootIndex = i;
    int leftIndex = left(rootIndex);
    int rightIndex = right(rootIndex);

    if(leftIndex <= n && root->arr[leftIndex] > root->arr[rootIndex] ){
        rootIndex = leftIndex;
    }
    if(rightIndex <= n && root->arr[rightIndex] > root->arr[rootIndex]){
        rootIndex = rightIndex;
    }

    if(rootIndex != i){
        swap(i,rootIndex);
        balance(arr,n,rootIndex);
    }

}

void delete(){
    root->arr[0] = root->arr[root->lastIndex];
    root->arr[root->lastIndex] = 0;

    root->lastIndex--;

    balance(root->arr,root->lastIndex,0);
}


void display(){
    int i=0;
    printf("\nMax Heap Representation\n");
    for( i=0 ; i<=root->lastIndex ; i++ ){
        printf("%d  ",root->arr[i]);
    }
    printf("\n");
}

int main(){
    
    createMaxHeap(10);
    insertValue(10);
    insertValue(6);
    insertValue(19);
    insertValue(27);
    insertValue(46);
    display();

    delete();

    display();
    return 0;
}