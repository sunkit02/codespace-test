#include <stdio.h>
#include <string.h>

int main(void) {
  int input = 0;
  char output[] = "";
  scanf("%d", &input);
  if (input % 3 == 0) {
    strcat(output, "fizz");
  }
  if (input % 5 == 0) {
    strcat(output, "buzz");
  }
  if (sizeof(output) == 1) {
    printf("%d\n", input);
  } else {
    puts(output);
  }
}