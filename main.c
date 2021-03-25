#include <stdio.h>
#include <stdlib.h>

/*this is a simple guessing game made by Cody Grande (also my last name is written correctly*/

double randomNumber, guesses, choice;
char a;

int main()
{
    a = 0;
    srand(time(NULL));
    printf("you have 5 guesses.");
    printf("\nletters are equal to zero.");
    printf("\nI am thinking of a number between 1 and 100.");
    int theRand();
}

int theRand()
{
    randomNumber = rand() % 101;
    while(randomNumber == 0){
        int theRand;
    }
    int theGame();
}

int theGame()
{
    printf("\ntake a guess.");
    while(guesses > 0){
        scanf("%lf", choice);
        if (choice > randomNumber){
            printf("Your guess is to high.");
            int theGame();
        }
        else
            if (choice < randomNumber);
            printf("Your guess is to low.");{
            int theGame();
            }
                if (choice == randomNumber){
                    printf(" YOU WIN!");
                        printf("Do you want to play again?(yes or no)");
                        a = getchar();
                        while (a == "yes" ){
                            int main(());
                        }

            }
            }
    printf(" you lose.");
    printf("Do you want to play again?(yes or no)");
    a = getchar();
    while (a == "yes" ){
        int main();
    }

    }
