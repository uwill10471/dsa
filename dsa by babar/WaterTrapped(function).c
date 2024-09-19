#include <stdio.h>
int min(int i, int j) {
  if (i < j) {
    return i;
  } else {
    return j;
  }
}

int water_trapped(int a[],int size){
  int left[size];
  int right[size];
  int max = 0;
  int max2 = 0;
  printf("Left - ");
  for (int i = 0; i < size; i++) {

    if (a[i] >= max) {
      max = a[i];
    }
    left[i] = max;
    printf("%d ", left[i]);
  }
  printf("\nRight - ");
  for (int j = size - 1; j >= 0; j--) {
    if (a[j] >= max2) {
      max2 = a[j];
    }
    right[j] = max2;
    printf("%d ", right[j]);
  }

  int blocks[size];
  for (int i = 0; i < size; i++) {
    blocks[i] = min(left[i], right[i]) - a[i];
    // printf("block -%d,%d,%d",left[i],right[i],a[i]);
  }
  int sum = 0;
  for (int i = 0; i < size; i++) {
    sum += blocks[i];
  }
  return sum;
}

int main() {
  int a[5] = {3,0,4,2,1};
  int size = sizeof(a) / sizeof(a[0]);
 
 int sum = water_trapped(a,size);
  
  printf("\nwater trapped = %d", sum);
}