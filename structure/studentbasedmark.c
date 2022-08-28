#include<stdio.h>

struct student
{
    char name[20];
    float mark;
  
}s[60],temp;

int main(){
    int n,i,j;
    printf("enter the number of students \n");
    scanf("%d",&n);
    for(i=0;i<n;i++){
          printf("\nenter the name, mark of student %d",i+1);
    scanf("%s%f",&s[i].name,&s[i].mark);
    }

    // bubble sort in descending
    
    for(i=0;i<n-1;i++){
        for(j=0;j<n-1-i;j++){
            if(s[j].mark<s[j+1].mark){
                temp=s[j];
                s[j]=s[j+1];
                s[j+1]=temp;      
            }
        }
    }
    
    printf("\n\nNAME\t\tMARK\n");

    for(i=0;i<n;i++){

         printf("%s\t\t%.2f\n",s[i].name,s[i].mark);
    }
    return 0;
}
