#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char * * argv) {
  char arr1[] = "abc";
  char arr2[] = "123";

  printf("Output1: %ld\n", strlen(arr1));

  printf("Output2: %d\n", strcmp(arr1, arr2));

  printf("Output3: %p\n", arr1);

  char * ptr1 = arr1;
  char * ptr2 = arr2;

  ptr2++;
  printf("Output4: %p\n", ptr2);
  printf("Output5: %ld\n", sizeof(ptr2));

  ptr1 = ptr2;
  (* ptr1)++;
  printf("Output6: %p\n", ptr1);
  printf("Output7: %s\n", arr2); // print the string arr2

  return EXIT_SUCCESS;
}
