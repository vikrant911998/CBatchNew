#include<stdio.h>
#include<string.h>

int main(){
    char str[15]="example";
    // char str1[10]=".com";
    char str1[10];
    // strcpy(str1,str);
    // printf("%s\n",str);
    // strcat(str,str1);
    // int result = strcmp(str,"examp2e");
    char *p = strchr(str,'k');
    // if(p == str){
    //     printf("True\n");
    // }
    printf("%c\n",*(p+1));
    return 0;
}