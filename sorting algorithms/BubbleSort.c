#include <stdio.h>

void bubble_sort(int *arr, int n) {
  int i, j, tmp;
  // Loop through the array n - 1 times. On each iteration, 
  //bubble the largest element to the end of the array.
  for (i = 0; i < n - 1; i++) {
  // loop through array ,comparing adjacent elements and
  // swapping them if they are in the wrong order.
  // Stop before the (n-i)th element, since that element will be
  // at the end of the array after the ith iteration.
    for (j = 0; j < n - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        tmp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = tmp;
      }
    }
  }
}
int main() {
  int n, i;
  printf("Enter the number of elements to be sorted: ");
  scanf("%d", &n);
  int arr[n];
  printf("Enter the elements: ");
  for (i = 0; i < n; i++)
    scanf("%d", &arr[i]);
  bubble_sort(arr, n);
  printf("Sorted list in ascending order:\n");
  for (i = 0; i < n; i++)
    printf("%d ", arr[i]);
  printf("\n");
  return 0;
}
