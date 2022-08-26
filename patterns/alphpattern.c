#include <stdio.h>
int main() {
   int i, j, rows;
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
  for (i = 1; i <= rows; ++i) {
      for (j = 1; j<=i; j++){
         printf("%c ",64+j); // ASCII value of A=65,B=66,C=67 ...
      }

   printf("\n");
  }
   return 0;
} 

/* for (i = 1; i <= rows; ++i) {
      char alpha= 'A';
      for (j = 1; j<=i; j++){
         printf("%c ",alpha);
         alpha++; // implicit type conversion
      }

      printf("\n");
   }
   */