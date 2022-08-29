
#include<stdio.h>
int main()
{
    // program for calculator
    char op;
    double num1,num2;
    printf("____SIMPLE___CLALCULATOR___\n");
    printf("addition '+'\ndifference '-'\nproduct '*'\ndivision '/' \n");
    printf("enter a operator *,+,-,/\n") ;
    scanf("%c",&op);
    printf("enter two operands\n");
    scanf("%lf%lf",&num1,&num2);
    //using switch statement to perform selected operation
   switch(op)
    {
           case '+':printf("sum is %.2lf",num1+num2);
           break;
           case '-':printf("difference is %.2lf",num1-num2);
           break;
           case '*':printf("product is %.2lf",num1*num2);
           break;
           case '/':printf("quotient is %.2lf ",num1/num2);
           break;   
    default:printf("wrong operation is selected");
        break;
    }
    return(0);
    }



