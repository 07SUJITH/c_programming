#include<stdio.h>

int main(){
    int A[20],n,num,loc,i;
    printf("Enter the size of array\n");
    scanf("%d",&n);
    printf("Enter %d elements\n",n); // sotrted order
    for(i=0;i<n;i++)
        scanf("%d",&A[i]);
    printf("Enter the element to be insert :\n");
    scanf("%d",&num);
    printf("Enter the location \n");
    scanf("%d",&loc);
    loc;
    if(loc-1>n)
        printf("insertion cant possible");
    else{
        for(i=n-1;i>=loc-1;i--)    // O(n-loc) is complexity in sorted array
            A[i+1]=A[i];
        
        A[loc-1]=num;
        n++;
        printf("New array :");
        for(i=0;i<n;i++)
            printf(" %d ",A[i]);
    }
 return 0;

}
// if unsoterd array 
// A[n]=A[loc-1]
// A[loc-1]=num  O(1) is complexity for unsorted array
