//  Simon Game

/*
 1. Initial the Game
 2. right --> add level
    wrong --> again / exit
 3. Loop
*/
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[]) {
    //  Variable defined here
    char another_game = 'Y';
    const unsigned int DELAY = 1;
    int is_correct = 1;
    unsigned int tries = 0;
    unsigned int digits = 0;
    time_t seed = 0;
    unsigned int number = 0;
    time_t wait_start = 0;

    //  Explain the Game
    printf("\nTo play the simple Simon," );
    printf("watch the screen for a sequence of digits.\n" );
    printf("Watch carefully, as the digits are only displayed",
                                "for %u second%s\n", DELAY, DELAY > 1? "s!":"!");
    printf("The computer will remove them, and then prompt you to enter the same sequence.\n");
    printf("When you do, you must put spaces between the digits\n" );
    printf("Good Luck! \n Press enter to continue.\n");
    scanf("%c", &another_game);

    //  main Loop Body
    do {
        is_correct = 1;            //Initialize the correct
        tries = 0;
        digits = 2;
        while (is_correct == 1) {
            /* Statements to play the Game */
            tries ++;
            wait_start = clock();

            //  Random number initialized here
            srand(time(&seed));
            for (unsigned int i = 1; i <= digits; i++) {
                printf("%d", rand() % 10);
            }

            for (;clock() - wait_start < DELAY * CLOCKS_PER_SEC; );
            printf("\r");
            for (unsigned int i = 0; i < digits; i++) {
                printf(" ");
            }
            if (tries == 1) {
                printf("\n Now you enter the sequence - don't forget the spaces\n" );
            } else {
                printf("\r" );
            }


            srand(seed);
            for (unsigned int i = 0; i < digits; i++) {
                scanf("%u", &number);
                if (number != rand() % 10) {
                    is_correct = 0;
                    break;
                }
            }
            printf("%s\n", is_correct? "Correct!" : "Wrong!");
            if (is_correct == 1 && (tries % 3) == 0) {
                digits++;
            }

        }
        printf("Do you want to play again (y/n) ?");
        scanf("%c", &another_game);
    } while(toupper(another_game) == 'Y');
    return 0;
}
