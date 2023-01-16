#include <stdio.h>

int main(void) {
  int passes = 0;
  int fails = 0;
  int students = 0;

  // process 10 students usign counter-controlled loop
  while (students < 10) {
    // print prompt
    printf("%s", "Enter result (1=P, 2=F): ");
    // new exam result
    int result;
    scanf("%d", &result);

    // determine and increment pass and fail count
    if (result == 1) {
      passes++;
    } else {
      fails++;
    }

    students++;
  }

  // print results
  printf("Passes: %d\n", passes);
  printf("Fails: %d\n", fails);

  // print bonus if 8 or more students passes
  if (passes >= 8) {
    puts("Bonus to instructor!");
  }
}