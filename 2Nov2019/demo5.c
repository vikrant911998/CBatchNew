#include<stdio.h>

int reverse(char *s,int start,int end){//2,1
    if(start == end)
        return 1;

    if(s[start] != s[end])
        return 0;
    
    if(start<end+1)
        return reverse(s,start+1,end-1);//2,1

    return 1;
}

int main(){
    char str[4] = {'a','b','c','a'};
    int flag = reverse(str,0,3);

    if(flag==1){
        printf("Palindrome\n");
    }
    else{
        printf("Not Palindrome\n");
    }
    return 0;
}