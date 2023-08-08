#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int user_choice, computer_choice, user_wins = 0, computer_wins = 0, round;

    printf("Welcome to the rock-paper-scissors game!\n");

    srand(time(0)); // seed the random number generator

    for (round = 1; round <= 3; round++) {
        printf("\nRound %d: Enter your choice (1 for rock, 2 for paper, 3 for scissors): ", round);
        scanf("%d", &user_choice);

        // generate a random choice for the computer
        computer_choice = rand() % 3 + 1;

        // compare the choices and determine the winner
        if (user_choice == computer_choice) {
            printf("It's a tie!\n");
        } else if ((user_choice == 1 && computer_choice == 3) ||
                   (user_choice == 2 && computer_choice == 1) ||
                   (user_choice == 3 && computer_choice == 2)) {
            printf("You win this round!\n");
            user_wins++;
        } else {
            printf("Computer wins this round!\n");
            computer_wins++;
        }
    }

    // determine the overall winner
    if (user_wins == computer_wins) {
        printf("\nIt's a tie game!\n");
    } else if (user_wins > computer_wins) {
        printf("\nCongratulations, you win the game!\n");
    } else {
        printf("\nSorry, the computer wins the game!\n");
    }

    return 0;
}
