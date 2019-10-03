#include<stdio.h>

int main(){
    char a[12]="AAABBCCCCDDE";
    int count=0,i=0;

    for(i=0;i<12;i++){
        count=1;
        while(count<11 && a[i]==a[i+1]){
            count++;
            i++;
        }
        printf("%c%d",a[i],count);
    }
    printf("\n");

}