#include <stdio.h>
#include <stdlib.h>

void f1(int* x, int* y) {
  int * ptr = x;
  x = y;
  y = ptr;
}

void f2(int* x, int* y) {
  int val = *x;
  *x = *y;
  *y = val;
}

void f3(int* x, int* y) {
  int * ptr = x;
  *x = *y;
  *y = *ptr;
}

void f4(int* x, int* y) {
  int val = *x;
  x = y;
  y = &val;
}

int main(int argc, char** argv)  {
  int arr_a[4] = {0, 2, 4, 6};
  int arr_b[4] = {1, 3, 5, 7};

  f1(arr_a, arr_b);
  f2(arr_a + 1, arr_b + 1);
  f3(arr_a + 2, arr_b + 2);
  f4(arr_a + 3, arr_b + 3);

  int i = 0; // [--- This is line 37 ---]
  for (; i < 4; i++) {
    printf("arr_a[%d] = %d\n", i, arr_a[i]);
  }
  for (i=0; i < 4; i++) {
    printf("arr_b[%d] = %d\n", i, arr_b[i]);
  }
  return EXIT_SUCCESS;
}
