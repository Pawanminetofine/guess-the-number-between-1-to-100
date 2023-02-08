#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h>
int main(){
	int number, guess,no_of_guesses=1;
	srand(time(0));
	number = rand() % 100 + 1;
	printf("Guess The number name\n");
	printf("\n\tPRESS ANY NUMBER TO PLAY THE GAME\n");

	getch();

	do{
		printf("\n\nGuess the number between 1 To 100 :  ");
		scanf("%d",&guess);
		
		if(guess > number){
			printf("\nWrong Guess! Try Again!\n\t\t\t (Hint : Enter a Lower Number) \n");
		}
		else if(guess < number){
			printf("\nWrong Guess! Try Again!\n\t\t\t (Hint : Enter a Higher Number) \n");
		}
		else{
			printf("\n\n\n You Guessed The Correct Number in %d attempts\n\t",no_of_guesses);
				if(no_of_guesses==1){
				printf("\n\n\n\t\t\t\t*****\n\t\t\t\t\tOutstanding!\n");
				
			}
			else if(no_of_guesses > 1 && no_of_guesses <= 3){
				printf("\n\n\n\t\t\t\t****\n\t\t\t\t\tWell Done!\n");
			}
			else if(no_of_guesses > 3 && no_of_guesses <= 8){
				printf("\n\n\n\t\t\t\t***\n\t\t\t\t\tGood!\n");
			}
			else if(no_of_guesses >8 && no_of_guesses <= 15){
				printf("\n\n\n\t\t\t\t**\n\t\t\t\t\tKeep it Up\n");
			}
			else{
				printf("\n\n\n\t\t\t\t*\n\t\t\t\tBetter luck next time\n");
			}
		}
		no_of_guesses++;
	}while(guess!=number);
	return 0;
}
