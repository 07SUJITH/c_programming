#include <stdio.h>
void swap(int *arr,int i,int j){
  int temp=arr[i];
  arr[i]=arr[j];
  arr[j]=temp;
}
int partition(int *arr, int left, int right) {
  int i = left + 1,j;
  int pivot = arr[left];
  int tmp;
  for (j = left + 1; j <= right; j++) {
    if (arr[j] < pivot) {
      swap(arr,i,j);
      i++;
    }
  } swap(arr,left,i-1);
  return i - 1;
}
void quicksort(int *arr, int left, int right) {
  if (left >= right)
    return;
  int pivot_index = partition(arr, left, right);
  quicksort(arr, left, pivot_index - 1);
  quicksort(arr, pivot_index + 1, right);
}
int main() {
  int n, i;
  printf("Enter the number of elements to be sorted: ");
  scanf("%d", &n);
  int arr[n];
  printf("Enter the elements: ");
  for (i = 0; i < n; i++)
    scanf("%d", &arr[i]);
  quicksort(arr, 0, n - 1);
  printf("Sorted list in ascending order:\n");
  for (i = 0; i < n; i++)
    printf("%d ", arr[i]);
  return 0;
}