/*
 * Project: guessingGame.c
 * Created by: Vicente Cabrera
 * Description: Has the user guess a number between 1 and 10. 
 * The program randomly selects a number, and then compares whether the user was right or wrong.
 * input example: guessingGame
 */

#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>
#define MAX 1


// Validate the user's input. We're checking for y/n/yes/no/Y/N
int validateInput(char input) {
	char tmpInput = tolower(input);
	if (input == 'y')
		return 1;

	return 0;
}


int main() {
	char guess[3];
	int guessNum = 2;
	int random = 0;
	int actionCheck = 1;
	char again[63];

	srand ((unsigned)time (NULL)); // Seed based on time

	do {
		printf("Pick a number between 1 and 10: ");

		fflush(stdout);
		fgetc(guess, sizeof(char), stdin);
		guessNum = atoi(guess);

		random = ((rand() %10) + 1); // Pick a random number between 1 and 10

		if (guessNum < 1 || guessNum > 10)
			printf("\nError: Pick a value between 1 and 10\n");
		else {
			printf("\nThe random number was %d\n", random);
			if (guessNum == random)
				printf("You match and you win!\n");
			else
				printf("You lost!\n");
		}

		printf("\n---------------\n");

		// Ask the user if they want to play again
		printf("Play again? (y/n)\n");
		fgets(again, MAX, stdin);
		actionCheck = validateInput(again[0]);

	} while (actionCheck == 1);

	return 0;
}