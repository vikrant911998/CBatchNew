#include<stdio.h>
#include<string.h>
char* findChar(char *,char c);


int main(){
    char str[10]="example";
    char *p = findChar(str,'k');

    printf("%c\n",*p);
    return 0;
}

char * findChar(char *a,char c){
    int i=0;
    char *temp = a;//1200
    for(i=0;i<10;i++){
        if(*temp == c)return temp;
        temp++;//1203
    }
    
}