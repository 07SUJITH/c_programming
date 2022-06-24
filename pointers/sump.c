#include <stdio.h>

int sum(int *x,int *y);
int main() {

  int a,b;
  printf("Enter two numbers :\n");
  scanf("%d%d",&a,&b);
  printf("sum=%d",sum(&a,&b));
  return 0;
}

int sum(int *x,int *y){
    int sum;
    sum=*x+*y;
    return sum;
  }