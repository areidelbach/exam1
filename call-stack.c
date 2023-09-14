#include <stdio.h>
#include <stdlib.h>

char func(int x) {
  return (x + 'A' - 'a'); // [--- This is line 5 ---]
}

int main(int argc, char * * argv) {
  if (argc < 3) {
    return EXIT_FAILURE;
  }

  char var = func(argv[2][1]); // [--- This is line 13 ---]
  printf("%c\n", var);
  printf("%d\n", var);

  return EXIT_SUCCESS;
}

