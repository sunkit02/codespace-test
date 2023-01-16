#include <stdio.h>

void towers_of_hanio(int, int, int, int);

int main(void) { towers_of_hanio(3, 1, 3, 2); }

void towers_of_hanio(int disksNum, int initialPeg, int targetPeg, int tempPeg) {
    // Check for valid diskNum
    if (disksNum < 1) {
        return;
    }
    // Move n - 1 disks to the temp peg
    towers_of_hanio(disksNum - 1, initialPeg, tempPeg, targetPeg);
    // Move the last disk to the target peg
    printf("%d -> %d\n", initialPeg, targetPeg);
    // Move the n - 1 disks from temp peg to target peg
    towers_of_hanio(disksNum - 1, tempPeg, targetPeg, initialPeg);
}