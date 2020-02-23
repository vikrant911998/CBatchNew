#include<stdio.h>

char * substring(char *str,int start, int end,int size){ //(abcdef,1,5)->bcde
    char result[10];
    int i=0;
    for(i=start ; i<end ;i++){
        result[i] = str[i];
        // printf("%c %c",str[i],result[i]);
    }

    printf("%d \n",result);
    return result;
}


int main(){
    // char result[10];
    char *str = "abcdef";
    char *result = substring(str,1,5,6);
    printf("%d \n",result);
    int i;
    printf("%s",result);
    // for(i=0;i<10;i++){
    //     printf("%c",result[i]);
    // }
    printf("\n");

    return 0;
}