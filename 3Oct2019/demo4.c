#include<stdio.h>

struct Person{
    int id;
    char name[10];
};



int main(){
    struct Person s1;
    s1.id = 101;
    // s1.name = {'r','a','h','u','l'};

    printf("%d\n",s1.id);
    // printf("%s\n",s1.name);
    
    return 0;
}