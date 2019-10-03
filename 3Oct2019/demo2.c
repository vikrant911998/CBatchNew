#include<stdio.h>

int main(){ 
    char arr[5][4]={"sun","car","boy","bar"};
    int i=0;
    char input;
    
    printf("Enter the character\n");
    scanf("%c",&input);
    
    for(i=0;i<5;i++){
        if(arr[i][0] == input){
            printf("%s\n",arr[i]);  
        }
        
    }
    printf("\n");

    return 0;
}