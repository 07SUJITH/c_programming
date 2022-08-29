#include<stdio.h>

struct student{
 char name[50];
    int semester,age;
    float cgpa;
};


int main(){
    FILE *fptr;
    struct student s[100];
    int i,n;
    printf("enter the number of students to add record: \n");
    scanf("%d",&n);
    for(i=0;i<n;i++){
    printf("enter the name :\n");
    scanf("%s",s[i].name);
    printf("enter smester :\n");
    scanf("%d",&s[i].semester);
    printf("enter age :\n");
    scanf("%d",&s[i].age);
    printf("enter the cgpa :\n");
    scanf("%f",&s[i].cgpa);
    }
    fptr=fopen("student.txt","a+");

    for(i=0;i<n;i++){
        fprintf(fptr,"student  name     =%s \n",s[i].name);
        fprintf(fptr,"         semester =%d \n",s[i].semester);
        fprintf(fptr,"         age      =%d \n",s[i].age);
        fprintf(fptr,"         cgpa     =%f \n",s[i].cgpa);
      fprintf(fptr," \n");
   }
     char ch;
     ch=fgetc(fptr);
     while(ch!=EOF){
        printf("%c",ch);
        ch=fgetc(fptr);
     }
fclose(fptr);
return 0;
}