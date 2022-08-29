#include<stdio.h>
int * largest(int *p1,int *p2);
int main(){
    int a,b;
    int *large;
    printf("enter two numbers :\n");
    scanf("%d%d",&a,&b);
   // large is declered as pointer since it receiving address value from the fn largest
    large=largest(&a,&b);
    printf("largest=%d",*large);
}

// fn name largest and type is int* since this fn return address
int * largest(int *p1,int *p2){
    if(*p1>*p2)
    return p1;
    else
    return p2;
}