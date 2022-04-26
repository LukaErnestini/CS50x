#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int *list = malloc(4 * sizeof(int));

  list[0] = 5;
  *(list + 1) = 6;
  list[2] = 7;
  list[3] = 8;
  // list[4] = 9;

  printf("%d\n", list[0]);
  printf("%d\n", list[1]);
  printf("%d\n", list[2]);
  printf("%d\n", list[3]);
  // printf("%d\n", list[4]);

  free(list);
}