#include<stdio.h>

struct student
{
    char name[20];
    int rollno,mark1,mark2;
    float avg;
};

void printDetails(struct student);

int main(){
    struct student s1,s2;
    printf("\n enter the name,roll number,mark1 and mark2 of 1st student");
    scanf("%s%d%d%d",&s1.name,&s1.rollno,&s1.mark1,&s1.mark2);

    printf("\n enter the name,roll number,mark1 and of 2st student");
    scanf("%s%d%d%d",&s2.name,&s2.rollno,&s2.mark1,&s2.mark2);
    
    s1.avg=(float)(s1.mark1+s1.mark2)/2;
    s2.avg=(float)(s2.mark1+s2.mark2)/2;

    printf("\n\nNAME\tROLL NUMBER\t\tMARK1\tMARK2\tAVERAGE\n");
    printDetails(s1);
    printDetails(s2);

   // printf("%s\t%d\t%d\t%d\t%f\n",s1.name,s1.rollno,s1.mark1,s1.mark2,s1.avg);
   // printf("%s\t%d\t%d\t%d\t%f",s2.name,s2.rollno,s2.mark1,s2.mark2,s2.avg);
    
}


void printDetails(struct student s){
    printf("%s\t%d\t\t%d\t%d\t%f\n",s.name,s.rollno,s.mark1,s.mark2,s.avg);
}