#include<stdio.h>


int main(){
    // char name[]= {'a'};
    char *name = "vikrant";
    char *name1 = "vikaswe";
    int i=0;
    int j=0;
    for(i=0;i<7;i++){
        for(j=0;j<7;j++){
            if(name[i] == name1[j])
                printf("%c and %c\n",name[i],name1[j]);
        }
    }


    return 0;
}