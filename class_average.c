#include <stdio.h>
#include <stdbool.h>

/*
    Format Specifiers

    %d - int (same as %i)
    %ld - long int (same as %li)
    %f - float
    %lf , %g - double[1]
    %c - char
    %s - string
    %x - hexadecimal
*/

void calc_grade_average(void);

const int max = 10;
int main(void) { 
  calc_grade_average(); 
}

void calc_grade_average(void) {
    double sum = 0;
    int count = 0;
    double grade = 0;

    puts("Enter -1 when to start calculation.\n");

    while (1) {
        // Prompt user input.
        printf("%s", "Enter grade: ");

        // Read user input into grade variable.
        bool isInvalidInput = scanf("%lf", &grade) != 1;
        // Checks if the input data type is valid
        if (isInvalidInput) {
            // If input was invalid, notify user and
            // jump to the next iteration of the loop.
            puts("Invalid input data type for grades, must be a number between 0 and 100.");

            // Consume all illegal chars from buffer.
            while (getchar() != '\n');
            continue;
        }
        // Check for sentinel value -1
        // and break out of the loop if found.
        if (grade == -1) break;
        // Validate that the grade entered is
        // between 0 and 100.
        if (grade < 0 || grade > 100) {
            puts("Grade must be between 0 and 100.");
            continue;
        }
        // Add grade to the running sum.
        sum += grade;
        // Increment grade count.
        count++;
    }

    // Check if there are any grades entered
    if (count != 0) {
        // If one or more grades were entered 
        // calculate the average.
        printf("Class average: %.2lf\n", sum / count);
    } else {
        // Else notify user that no grades has been entered.
        puts("No grade has been entered.");
    }
}