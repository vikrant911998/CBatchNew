//Modulo-Division ->Hashing Method
#include<stdio.h>

int main(){
    int a[5] = {1950,1834,2101,1732,2013};
    int size = 5;
    int b[10] = {0};
    int temp = 0;

    for(int i=0 ;i<5;i++){
        temp = a[i]%size;
        b[temp] = a[i];
    }

    int k = 2013;
    temp = k%size;
    printf("Element = %d\n",b[temp]);

    return 0;
}