#include <stdio.h>
int main() {
   int i, j, rows;
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   for (i = rows; i>=1; i--) {
      for (j = 1; j<=i; j++){
         printf("%d ",j);
      }
      printf("\n");
   }

   return 0;
} 

/*   for (i = rows; i>=1; i--) {
      for (j = 1; j<=i; j++){
         printf("%d ",j);
      }
      printf("\n");
   }

 for (i = 1; i <= rows; ++i) {
      for (j = 1; j<=rows+1-i; j++){
         printf("%d ",j);
      }




   */