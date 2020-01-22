#include<stdio.h>
#include<stdlib.h>

typedef struct Height{
    int feet;
    int inches;
}Height;


void input(Height *height){
    printf("Enter the Height in feet\n");
    scanf("%d",&height->feet);

    printf("Enter the height in inches\n");
    scanf("%d",&height->inches);
}

int calculate(Height *height){
    int total = (height->feet*12)+height->inches;

    return total;
}

void output(Height *height){
    printf("Maximum Height is %d feet and %d inches.",height->feet,height->inches);
}

void checkMaximumHeight(Height a[]){
    int i=0;
    int max = calculate(&a[0]);
    Height *temp = &a[0];

    for(i=1 ; i<5 ; i++){

        if( max < calculate(&a[i]) ){
            max = calculate(&a[i]);
            temp = &a[i];
        }
    }
    output(temp);
}


int main(){
    Height arr[5]; 

    Height h;
    int i=0;

    for(i=0; i<5; i++){
        input(&h);
        arr[i] = h;
    }

    checkMaximumHeight(arr);
    printf("\n");


    return 0;
}
