#include<stdio.h>

int main(){ 
    int arr[12] = {2,2,3,3,4,4,5,7,7,7,6,6}; //behjrn
    char chars[8][4] = {"abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

    char output[10];
    int i=0,count =0,k=0;

    while(i<12){
        count = 0;
        while(arr[i] == arr[i+1]){
            count++; 
            i++; 
        }
        output[k] = chars[ arr[i]-2 ][count]; 
        k++;
        i++;
    }

    printf("%s \n",output);



    return 0;
}