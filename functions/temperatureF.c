#include<stdio.h>
float far(float celsius);

int main(){
    float celsius;
    printf("enter the temperature in celsius:\n");
    scanf("%f",&celsius);
    printf("temperature in fahrenheit is %.2f ",far(celsius));
}

float far(float celsius){
 float far=celsius*(9.0/5)+32;
 return far;
}