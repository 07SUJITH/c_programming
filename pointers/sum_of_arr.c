#include<stdio.h>
int sumArr(int *ptr,int n);
int main(){
    int arr[20],n,i;
    printf("enter the size of array: \n");
    scanf("%d",&n);
    int *ptr=arr;
    printf("enter the array elements: \n");
    for(i=0;i<n;i++){
        scanf("%d",ptr);
        ptr++;
    }
    ptr=arr;
   printf("sum of array elements: %d\n",sumArr(ptr,n));
}
int sumArr(int *ptr,int n){
        int sum=0;
        for(int i=0;i<n;i++){
        sum=sum+(*ptr);
        ptr++;
    }
  return sum;

}