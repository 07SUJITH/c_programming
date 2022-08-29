#include<stdio.h>

int main(){
    int arr[20],n,i;
    printf("enter the size of array: \n");
    scanf("%d",&n);
    int *ptr=arr;  // int *ptr=&arr[0];
    printf("enter the array elements: \n");
     // reading array elements using pointer ptr
     // ptr++; means incresing adddres by scale factor(4 for int)

    for(i=0;i<n;i++){
        scanf("%d",ptr);
        ptr++;
    }
    //printing array elements using pointer
    // initialize pointer with address of arr[0]
    ptr=arr;
    printf("array elements array");
    for(i=0;i<n;i++){
        printf("%d\t",*ptr);
        ptr++;
    }
 
}
