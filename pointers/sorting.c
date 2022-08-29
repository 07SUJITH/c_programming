#include<stdio.h>
int main(){
    int arr[30],n,i,j,temp;
    int *ptr=arr;
    printf("enter the size of array \n");
    scanf("%d",&n);

    printf("enter the array elements :\n");
    for(i=0;i<n;i++){
        scanf("%d",ptr);
        ptr++;

    }
    ptr=arr;
    printf(" array elements before sorting :\n");
    for(i=0;i<n;i++){
        printf("%d\t",*ptr);
        ptr++;

    }
// bubble sorting using pointer

ptr=arr;
for(i=0;i<n-1;i++){
    for(j=0;j<n-i-1;j++){
        if(*(ptr+j)>*(ptr+j+1)){
            temp=*(ptr+j);
            *(ptr+j)=*(ptr+j+1);
            *(ptr+j+1)=temp;
        }

    }
}
ptr=arr;
printf("\narray elements after sorting :\n");
    for(i=0;i<n;i++){
        printf("%d\t",*ptr);
        ptr++;    
}


}