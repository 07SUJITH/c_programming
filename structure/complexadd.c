#include<stdio.h>

struct complex
{
    int rp,ip;
}c1,c2,sum;

int main(){
printf("\nenter the real and imaginary part of complex number 1: ");
scanf("%d%d",&c1.rp,&c1.ip);
printf("\nenter the real and imaginary part of complex number 2: ");
scanf("%d%d",&c2.rp,&c2.ip);
sum.rp=c1.rp+c2.rp;
sum.ip=c1.ip+c2.ip;

printf("\ncomplex number 1:%d+%di",c1.rp,c1.ip);
printf("\ncomplex number 2:%d+%di",c2.rp,c2.ip);
printf("\nsum             :%d+%di",sum.rp,sum.ip);
}




