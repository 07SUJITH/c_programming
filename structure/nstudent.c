#include<stdio.h>

struct student
{
    char name[20];
    int rollno,mark1,mark2;
    float avg;
}s[60];

int main(){
    int n,i;
    printf("enter the number of students \n");
    scanf("%d",&n);
    for(i=0;i<n;i++){
          printf("\nenter the name,roll number,mark1 and of  student-%d",i+1);
    scanf("%s%d%d%d",&s[i].name,&s[i].rollno,&s[i].mark1,&s[i].mark2);
    }

    for(i=0;i<n;i++){
            s[i].avg=(float)(s[i].mark1+s[i].mark2)/2;
   
    }
    printf("\n\nNAME\tROLL NUMBER\tMARK1\tMARK2\tAVERAGE\n");

    for(i=0;i<n;i++){
         printf("%s\t%d\t\t%d\t%d\t%.2f\n",s[i].name,s[i].rollno,s[i].mark1,s[i].mark2,s[i].avg);
    }
    return 0;
}
