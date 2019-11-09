#include<stdio.h>

void checkAnagram(char *p1,char *p2){
    int a1[255];
    int a2[255];
    int i=0;
    for(i=0;i<255;i++){
        a1[i]=0;
        a2[i]=0;
    }

    for(i=0;i<255;i++){
        a1[p1[i]]++;
        a2[p2[i]]++;
    }

    for(i=0;i<255;i++){
        if(a1[i] != a2[i]){
            printf("Not anagram\n");
            return ;
        }
    }
    printf("anagram\n");
}


int main(){
    char *str1 = "silent";
    char *str2 = "lieten";

    checkAnagram(str1,str2);

    return 0;
}