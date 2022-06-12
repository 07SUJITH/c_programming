#include <stdio.h>

int main() {

 int n,i,key,flag=0;
printf("enter the limit of array\n");
scanf("%d",&n);
int elements[n];
printf("Enter the elements of array:\n");
  for(i=0;i<n;i++){
    scanf("%d",&elements[i]);
    }
printf("entered elements are:\n");
for(i=0;i<n;i++){
  printf("%d\n",elements[i]);
}
printf("enter element to be search:\n");
scanf("%d",&key);
for(i=0;i<n;i++)
  {
    if(elements[i]==key)
    {
      flag=1;
      break;
    }
    
  }
if(flag==1)
{
  printf("%d is found in array at the position %d",elements[i], i+1);
}
else 
{
 printf("element not found in array");
}
  return 0;
}