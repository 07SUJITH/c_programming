// right angle pattern printing
#include<stdio.h>
int main()
{   int row,i,j;
    printf("enter the number of rows");
    scanf("%d",&row);
    //loop for printing rows
    for(i=0;i<=row;i++){
        //loop for printing column
        for(j=0;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
}