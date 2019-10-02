#include<stdio.h>
// AAAAABBBCCCCCCDDDDE->A5B3C6D4E(STRING COMPRESSION)
// int main(){
//     int a[5]={1,2,3,4,5};
//     int b[5];
//     int i=0,j=0;
//     int p;

//     for(i=0;i<5;i++){
//         p=0;
//         for(j=0;j<5;j++){
//             if(i==j){
//                 continue;
//             }
//             else{
//                 p=p*a[i];
//             } 
//         }
//         b[i] = p;
//     }

//     for(i=0;i<5;i++){
//         printf("%d  ",b[i]);
//     }

//     return 0;
// }
int main(){
    int a[5]={1,2,3,4,5};

    int i=0,j=0;
    int p=1;

    for(j=0;j<5;j++){
        p=p*a[j];
    }
    printf("Multiply : %d\n",p);
    for(i=0;i<5;i++){
        int temp = p/a[i];
        
        printf("%d \n",temp);
    }

    return 0;
}

