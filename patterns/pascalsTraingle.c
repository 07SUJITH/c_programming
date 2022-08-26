// isosceles triangle pattern printing
#include<stdio.h>
int main()
{   int temp,row,i,j,k;
    printf("enter the number of rows");
    scanf("%d",&row);
    for(i=0;i<row;i++){
        for(j=0;j<row-i;j++){
            printf(" ");
        }
        temp=1;
        for(k=0;k<=i;k++){
            printf("%d ",temp);
            temp=temp*(i-k)/(k+1);
        }
        printf("\n");
    }
    return 0;
}