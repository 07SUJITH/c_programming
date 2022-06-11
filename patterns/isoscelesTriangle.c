// isosceles triangle pattern printing
#include<stdio.h>
int main()
{   int row,i,j,k;
    printf("enter the number of rows");
    scanf("%d",&row);
    //loop for printing each row
    for(i=0;i<row;i++){
        // loop for creating space in each row
        for(j=0;j<=(row-i);j++){
            printf(" ");
        }
        //loop for printing * in row after space
        for(k=0;k<=i;k++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}