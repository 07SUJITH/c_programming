#include<stdio.h>
#include<conio.h>
void primeCheck(int);
void primeUpto(int);
void nprime(int);
void main(){
  printf("__________PROGRAM FOR PRIME NUMBERS________________\n");

  int num;
  printf("enter a number \n");
  scanf("%d",&num);
  primeCheck(num);
  primeUpto(num);
  nprime(num);
  getch();
}

void primeCheck(int n){
    int i;
    for(i=2;i<n;i++){
        if(n%i==0){
            printf("%d is not prime\n",n);
            break;
        }
    }
if(i==n){
    printf("%d is prime\n",n);
}
}
void primeUpto(int n){
    int j,i;
    printf("prime numbers upto %d : ",n);
    for(j=2;j<=n;j++){  

        for(i=2;i<j;i++){


            if(j%i==0){
                break;
           }}
        if(i==j){
        printf("%d\t",j);

        }
    }
    printf("\n");
}

void nprime(int n){
     int j=2,i,count;
    printf("first %d prime numbers are :",n);
    
        for(count=0;count<n;j++){ 
        for(i=2;i<j;i++){


            if(j%i==0){
                break;
           }}
        if(i==j){
        printf("%d\t",j);
        count++;
        }
    }
    
}

