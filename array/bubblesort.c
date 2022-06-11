#include <stdio.h>
#include<conio.h>

int main(void) {
  int array[100],temp,j,limit,i;
  printf("Enter the limit of array:");
  scanf("%d",&limit);
  printf("Enter the elements");
  for(i=0;i<limit;i++){
      scanf("%d",&array[i]);
  }printf("entered elements");
  for(i=0;i<limit;i++){
      printf("%d\t",array[i]);
  }
  //use array limit-1 times
   for(i=0;i<limit-1;i++){   
     // swapping elements in array in limit-i-1 times
     for(j=0;j<limit-i-1;j++){
        if(array[j]>array[j+1])
           {
           // code for swapping 
           temp=array[j];
           array[j]=array[j+1];
           array[j+1]=temp;
           }
    }
     }
  
printf("sorted array is:");
  for(i=0;i<limit;i++){
    printf("%d\t",array[i]);
  }
  // pauses the Output Console until a key is pressed.
  getch();
  return 0;

}