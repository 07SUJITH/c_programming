#include<stdio.h> 
void swap(int *a,int *b);

int main(){
    int a,b;
    printf("enter the first number\n");
    scanf("%d",&a);
    printf("enter the 2nd number\n");
    scanf("%d",&b);
    swap(&a,&b);
    printf("after swapping\n\n");
    printf("first number=%d\n2nd number=%d",a,b);

}
// call by reference
void swap(int *a,int *b){
    int t=*a;
    *a=*b;
    *b=t;

}
