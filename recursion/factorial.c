#include<stdio.h>
float fact(int num);

int main(){
    int num;
    printf("enter a num:\n");
    scanf("%d",&num);
    printf("factorial of %d is: %.0f",num,fact(num));
}
   float fact(int num){
    if(num==0){
        return 1;
    }
    float factNm1=fact(num-1);
    float factN=factNm1*num;
    return factN;
}
