#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "time.h"

int main(int argc, char* argv[]) {

	srand(time(NULL));

	char guessWords[][20] = {
		"bear",
		"water",
		"raven",
		"fruit",
		"apple"
	};

	// index for random word
	int randomIndex = rand() % 5;
	int numCorrect = 0;
	int lengthOfWord = strlen(guessWords[randomIndex]);
	int letterGuessed[];
	int loopIndex = 0;
	int i;

    // game loop
	for(i = 1; i < 6; i++) {

		for(loopIndex = 0; loopIndex < lengthOfWord; loopIndex++) {
			letterGuessed[loopIndex] = "*";
			}
		}

		for(loopIndex = 0; loopIndex < lengthOfWord; loopIndex++) {
			if(argv[i] == guessWords[randomIndex][loopIndex]) {
				letterGuessed[loopIndex] = argv[i];
				numCorrect++;
			}
		}
	}
	letterGuessed[lengthOfWord] = 0;

	if(numCorrect = lengthOfWord) {
		printf("The word was: %s\n", guessWords[randomIndex]);
		printf("\nYou win!\n");
	} else {
		printf("You guessed: %s\n", letterGuessed);
		printf("\nYou lose :(\n");
	}
	return 0;
}
