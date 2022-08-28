#include<stdio.h>

struct student
{
    char name[20];
    int rollno,mark1,mark2;
    float avg;
}s1,s2;

int main(){
    printf("\n enter the name,roll number,mark1 and of 1st student");
    scanf("%s%d%d%d",&s1.name,&s1.rollno,&s1.mark1,&s1.mark2);

    printf("\n enter the name,roll number,mark1 and of 2st student");
    scanf("%s%d%d%d",&s2.name,&s2.rollno,&s2.mark1,&s2.mark2);
    
    s1.avg=(float)(s1.mark1+s1.mark2)/2;
    s2.avg=(float)(s2.mark1+s2.mark2)/2;

    printf("\n\nNAME\tROLL NUMBER\tMARK1\tMARK2\tAVERAGE\n");
    printf("%s\t%d\t%d\t%d\t%f\n",s1.name,s1.rollno,s1.mark1,s1.mark2,s1.avg);
    printf("%s\t%d\t%d\t%d\t%f",s2.name,s2.rollno,s2.mark1,s2.mark2,s2.avg);
    
}
