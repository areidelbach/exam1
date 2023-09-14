#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * * argv) {
  // check if input file name is given
  if ([--- FILL IN THE BLANK ---]) { // [--- This is line 6 ---]
    printf("Need input file name\n");
    return EXIT_FAILURE;
  }

  FILE * infile = fopen(argv[1], "r");
  if (infile [--- FILL IN THE BLANK ---]) { // [--- This is line 12 ---]
    // [--- This is line 13 ---]
    return EXIT_FAILURE;
  }

  int count = 0;
  int val = 0;

  // read an integer and assign it to val
  while (fscanf(infile, "%d", &val) == 1) {
    count ++;
  }

  printf("The file has %d integers.\n", count); // [--- This is line 25 ---]

  // [--- This is line 27 ---]
  return EXIT_SUCCESS;
}
