#include <stdio.h>
int main() {
   int i, j, ch;
   printf("Enter a alphabet : ");
   scanf("%c", &ch);
   if(ch>=65&&ch<=90)
   printf("uppercase ");
   else
   printf(" loercase");

   return 0;
}
