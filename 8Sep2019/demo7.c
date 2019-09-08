#include<stdio.h>
void change(int *);

int main(){
    int a[5]={32,14,57,87,51};
    
     change(a);

    // int i=0;
    // for(i=0;i<5;i++){
    //     printf("%d\n",f[i]);
    // }
    return 0;
}

void change(int *p){
    int i=0;
    for(i=0;i<5;i++){
        // *(p+i)
        p[i] = (i+1)*5;
    }

    for(i=0;i<5;i++){
        printf("%d\n",p[i]);
    }

    // return p;

}