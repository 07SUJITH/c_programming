#include<stdio.h>
#include<stdlib.h>
int main(){
    int A[20],size,pos,i,d_num;
    printf("Enter the size of array\n");
    scanf("%d",&size);
    if(size>20){
        printf("out of bound");
        exit(0);
    }
    else{
        printf("enter %d elements\n",size); // sotrted order
        for(i=0;i<size;i++)
            scanf("%d",&A[i]);
        printf("Enter the position of element to be delete :\n");
        scanf("%d",&pos);
        if(pos<=0||pos>size)
        printf("deletion cant possible");
        else{
            d_num=A[pos-1];
            for(i=pos-1;i<size-1;i++)
                A[i]=A[i+1];    
             // O(size-pos) is complexity in sorted array
             //best case -> pos of element to be delete at last of array
             //worst case -> pos of element to be delete at the start of array
             size--;
             printf("New array :");
             for(i=0;i<size;i++)
                  printf(" %d ",A[i]);
             printf("\ndeleted element is:%d",d_num);
        }
    }
    return 0;
}
// if unsoterd array 
// A[pos-1]=A[size-1];  size--; (here we need not be maintain the relative posion of the array elements)
//   O(1) is complexity for unsorted array deletion
