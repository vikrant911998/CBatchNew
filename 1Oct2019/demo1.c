#include<stdio.h>
// 1,2,3,4,5,1,7,8
int main(){
    int a[5]={1,2,3,4,5};
    int *p = a;
    int b =45;
    int *f = &b;
    *(p+1) = 45;
    printf("%d\n",*(p+1));

    return 0;
}