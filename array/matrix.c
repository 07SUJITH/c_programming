#include <stdio.h>
#include<stdlib.h>

void readMatrix(int m,int n,int arr[][n]);
void displayMatrix(int m,int n,int arr[][n]);
void multiplication(int m1,int n1,int m2,int n2,int A[][n1],int B[][n2],int C[m1][n2]);

int main() {
   int A[10][10],B[10][10],C[10][10];
   int m1,n1,m2,n2,m3,n3;
   printf("Enter the number of rows and cloumn of 1st matrix: ");
   scanf("%d%d",&m1,&n1);
   printf("Enter the number of rows and cloumn of 2nd matrix: ");
   scanf("%d%d",&m2,&n2);
   if(n1!=m2){
    printf("number of columns of 1st matrix should be equal to number of rows of 2nd matrix ");
    exit(0);
   } 
   else{
     printf("Enter the 1st matrix: \n");
     readMatrix(m1,n1,A);
     printf("Enter the 2nd matrix: \n");
     readMatrix(m2,n2,B);
     multiplication(m1,n1,m2,n2,A,B,C);
     printf("out put matrix\n");
     displayMatrix(m1,n2,C);
   }
}

void readMatrix(int m ,int n,int arr[][n]){
  for(int i=0;i<m;i++){
   for(int j=0;j<n;j++){
      scanf("%d",&arr[i][j]);
   }
  }
}
void displayMatrix(int m,int n,int arr[][n]){
  for(int i=0;i<m;i++){
   for(int j=0;j<n;j++){
      printf("%d",arr[i][j]);
   printf("\n");   
   } 
}
}
void multiplication(int m1,int n1,int m2,int n2,int A[][n1],int B[][n2],int C[][n2]){
// Initializing elements of matrix C to 0.
   for(int i=0;i<m1;i++){
       for(int j=0;j<n2;j++)
       C[i][j]=0;  
   }
   for(int i=0;i<m1;i++){
      for(int j=0;j<n2;j++){
         for(int k=0;k<n1;k++){
            C[i][j]=C[i][j]+A[i][k]*B[k][j];
         }
      }
   }
}
