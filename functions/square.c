#include<stdio.h>
void square(float side);

int main(){
    float side;
    printf("enter the side of square:\n");
    scanf("%f",&side);
    square(side);
}

void square(float side){
 printf("area of square is : %.2f ",side*side);
}