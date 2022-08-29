#include <stdio.h>
#include<conio.h>
void main () {
   FILE *f;
   int len;
   f = fopen("one.txt", "r");
   if(f == NULL) {
      perror(“Error opening file”);
      return(-1);
   }
   fseek(f, 0, SEEK_END);
   len = ftell(f);
   fclose(f);
   printf("Size of file: %d bytes", len);
   getch();
}