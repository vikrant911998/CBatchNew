#include<stdio.h>
float basic();
float calHra(float);
float calDa(float);
float calTa(float);
float netSalary(float,float,float,float,int);



int main(){
    int pf = 1400;

    float bs = basic();
    float hra = calHra(bs);
    float da = calDa(bs);
    float ta = calTa(bs);
    float ns  = netSalary(bs,hra,da,ta,pf);
    printf("The net Salary is %f",ns);
    return 0;
}

float netSalary(float bs,float hra,float da,float ta,int pf){

    float ns = (bs+hra+da+ta) - pf;
    return ns;

}

float calHra(float bs){
    return (.3*bs);
}

float calDa(float bs){
    return (.2*bs);
}

float calTa(float bs){
    return (.1*bs);
}

float basic(){
    float bs=0;
    printf("Enter the basic salary \n");
    scanf("%f",&bs);

    return bs;
}