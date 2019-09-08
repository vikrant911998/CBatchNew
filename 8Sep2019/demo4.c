#include<stdio.h>
void print(int *);

int main(){
    int a[5]={21,57,91,53,37};
    // int *p = a;//p = address of zero index of array(a)
    // printf("%d\n",*p);
    // printf("%d\n",*(p+2));
    // int i=0;
    // for(i=0;i<5;i++){
    //     printf("%d\n",*(a+i));
    // }

    print(a);
    return 0;
}


void print(int *p){
    int i=0;

    for(i=0;i<5;i++){
        printf("%d\n",p[i]);
    }

}