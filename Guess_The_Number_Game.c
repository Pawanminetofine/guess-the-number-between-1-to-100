#include<stdio.h>
#include<conio.h>
#include<time.h>
//this game you 15 attempt to complete it so best luck of you
int main(){
	int number, guess,no_of_guesses=1;
	srand(time(0));//function for random guess
	number = rand() % 100 + 1;
	printf("Guess The number name\n");
	printf("\n\tPRESS ANY NUMBER TO PLAY THE GAME\n");

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
				printf("Outstanding! and you won 15 rupee caseback\n");
				
			}
			else if(no_of_guesses > 1 && no_of_guesses <= 3){
				printf("Well Done!\n");
			}
			else if(no_of_guesses > 3 && no_of_guesses <= 8){
				printf("Good!\n");
			}
			else if(no_of_guesses >8 && no_of_guesses <= 15){
				printf("Keep it Up and you can do more better\n");
			}
			else{
				printf("Better luck next time try \n");
			}
		}
		no_of_guesses++;
	}while(guess!=number);
	return 0;
}
