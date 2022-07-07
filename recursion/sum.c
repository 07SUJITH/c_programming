#include<stdio.h>

int sumNum(int num);

int main(){
    int num;
    printf("enter the number");
    scanf("%d",&num);
    printf("sum is: %d",sumNum(num));
    return 0;
}

int sumNum(int num){
   int sum;
    if (num==0){
        return num;
        }
        sum=num+sumNum(num-1);
        return sum;
}