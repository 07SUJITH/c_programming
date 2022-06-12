#include<stdio.h> 
int  fib(int n);

int main(){
    int n;
    printf("Enter the value of n \nfot nth term of fibonacci series.\n");
    scanf("%d",&n);
    printf("%dth fibonacci number is %d",n,fib(n));
}
    int  fib(int n){
  
  if(n==1){
    return 0;
  }
  if(n==2){
    return 1;
  }
  int fibNm1=fib(n-1);
  int fibNm2=fib(n-2);
  int fibN=fibNm1+fibNm2;
  return fibN;
}
