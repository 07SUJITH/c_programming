#include<stdio.h>

int leapYear(int);

int main(){
    int n;
    printf("enter a year :\n");
    scanf("%d",&n);
    if(leapYear(n))
       printf("%d is leapyear",n);
    else 
        printf("%d is not leapyear",n); 
          
}

int leapYear(int n){
    if(n%4==0){
        if(n%100==0){
            if(n%400==0)
                return 1;
            else    
                return 0;
        }
        else
        return 1;
    }
    else
        return 0;
}