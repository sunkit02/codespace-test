#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "random.h"

enum Result { PLAYER_WON, HOUSE_WON };

enum Result play_crap(bool displayOutput);

int main(void) {
    int playerWins = 0;
    int houseWins = 0;
    int totalRuns = 10000000;

    for (int i = 0; i < totalRuns; i++) {
        PLAYER_WON == play_crap(false) ? playerWins++ : houseWins++;
    }
    puts("");
    printf("Total runs: %d\n", totalRuns);
    printf("Player winrate: %.2lf%%\n", ((double)playerWins / totalRuns) * 100);
    printf("House winrate: %.2lf%%\n", ((double)houseWins / totalRuns) * 100);
}

enum Result play_crap(bool displayOutput) {
    // seed rand
    srand(time(NULL));

    // Initialize result to player won
    enum Result result;

    // start game loop
    // Initialize dice rolls to 0.
    int dice1 = 0;
    int dice2 = 0;
    // Initialize point to 0.
    int point = 0;

    // Initialize roll count to 0.
    int rollCount = 0;

    // Loop until player wins or looses.
    while (1) {
        dice1 = randint(1, 6);
        dice2 = randint(1, 6);
        int sum = dice1 + dice2;

        if (displayOutput) {
            printf("Rolls: %d, %d, Sum: %d\n", dice1, dice2, sum);
        }

        // Check if is the first roll
        if (rollCount < 1) {
            // Check if player wins.
            if (sum == 7 || sum == 11) {
                // If player wins, exit game loop.
                if (displayOutput) {
                    puts("Lucky roll! The player wins!");
                }
                result = PLAYER_WON;
                break;
            } else if (sum == 2 || sum == 3 || sum == 12) {
                if (displayOutput) {
                    puts("Craps! The house wins.");
                }
                result = HOUSE_WON;
                break;
            } else {
                point = sum;
            }
        } else {
            // Check if the player wins
            if (sum == point) {
                if (displayOutput) {
                    puts("You made your point. Player wins!");
                }
                result = PLAYER_WON;
                break;
            } else if (sum == 7) {
                if (displayOutput) {
                    puts("The house wins.");
                }
                result = HOUSE_WON;
                break;
            }
        }
        rollCount++;
    }

    return result;
}