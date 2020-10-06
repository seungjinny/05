#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int answer=38;
	int guess;
	int tries;
	
	do
	{
		printf("Guess a number:");
		scanf("%i", &guess);
		
		if (guess > answer)
			printf("high!\n");
			
		if (guess < answer)
			printf("low!\n");
		tries++;
	} while (guess != answer);
	
	printf("Congratulation! Trials : %i\n", tries);
	
	return 0;
}
