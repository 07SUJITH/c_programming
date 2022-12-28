#include <stdio.h>
void selection_sort(int* list, int size) {
  for (int i = 0; i < size - 1; i++) {
      // Find the minimum element in the unsorted part of the list
      int min_index = i;
      for (int j = i + 1; j < size; j++) {
        if (list[j] < list[min_index]) {
          min_index = j;
        }
      }
      // Swap the minimum element with the first element of the unsorted part
      if(i!=min_index){
          int temp = list[i];
          list[i] = list[min_index];
          list[min_index] = temp;
      }
  }
}
int main(void) {
  int size;
  printf("Enter the number of integers in the list: ");
  scanf("%d", &size);
  int list[size];
  printf("Enter the integers, separated by spaces: ");
  for (int i = 0; i < size; i++)
    scanf("%d", &list[i]);
  selection_sort(list, size);
  printf("Sorted list in ascending order :");
  for (int i = 0; i < size; i++) 
    printf("%d ", list[i]);
}
