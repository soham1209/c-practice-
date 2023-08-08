#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// my solved solution
int genraterandaomnumber(int n)
    {
        srand(time(NULL));//srand takes secod as input and is drfinde inside stdib.h
        return rand() % n;
    }

int main()
{
    int i = 0, a,b,c = 1,d = 1;
    printf(" This is a game  of Rock,Paper,Scissor\n");
    printf("For your tern you need to press following button to play \n");
    printf("For Rock press 0\nFor Paper press 1\nFor Scissor press 2\n");
        printf("Enter the number you want the chose for\n");
    while (i<3)
    {
        printf("Your turn chose number\n");
        scanf("%d",&a);
        printf("computer turn to chose\n");
        b = genraterandaomnumber(3);
        printf("The number chosed by you is %d\nAnd the number chosed by computer is %d\n",a,b);
        
        if (a == b)
        {
            printf("your distion and the computer distion is same so its a draw\n");
            printf("No one get the point\n");
        }
        else if (a == 1 && b == 0)   
        {
            printf("You chose %d which is paper and computer %d which is rock\nSo you won\n",a,b);
            c++;
        }
        else if (a == 2 && b == 0)
        {
            printf("You chose %d which is sessior and computer %d which is rock\nSo computer won\n",a,b);
            d++;
        }
        else if (a == 2 && b == 1)   
        {
            printf("You chose %d which is sessior and computer %d which is paper\nSo you won\n",a,b);
            c++;
        }
        else if (a == 0 && b == 1)   
        {
            printf("You chose %d which is rock and computer %d which is paper\nSo computer won\n",a,b);
            d++;
        }
        else if (a == 1 && b == 2)   
        {
            printf("You chose %d which is paper and computer %d which is serissor\nSo computer won\n",a,b);
            d++;
        }
        else if (a == 0 && b == 2)   
        {
            printf("You chose %d which is rock and computer %d which is sessior\nSo you won\n",a,b);
            c++;
        }
        i++;
    }
    if (c > d)
    {
        printf(" congraulation you won");
    }
    else if (d > c)
    {
        printf("sorry you lost but computer won");
    }
    else
    printf("no one win");
    
    
        // printf("The ramdom number between 0 to 3 is %d\n",genraterandaomnumber(3));

    return 0;
}
// gbt written code
/*#include <stdio.h>
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
*/