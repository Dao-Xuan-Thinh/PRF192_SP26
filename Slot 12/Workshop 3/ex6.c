//Calls
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//Funcs
void play_game() {
	int guess, goal, attempt = 1;

	srand(time(NULL));
	goal = rand() % 100 + 1;

	do{
		printf(">  ");
		if(scanf("%d", &guess)!= 1 || guess < 1 || guess > 100) {
			printf("Khong hop le!");
            
			while(getchar() != '\n'); //Use this instead of fflush(stdin)

			continue;
		}
        if(guess > goal) {
            printf("nho hon | ban con %d lan\n", 6 - attempt);
            attempt++;
        } 
        else if(guess < goal) {
            printf("lon hon | ban con %d lan\n", 6 - attempt);
            attempt++;
        }
        else if(attempt < 6) {
			printf("ban da doan dung so %d sau %d lan", goal, attempt);
			return;
		}
	} while(attempt <= 6);

	printf("het luot, so nen doan la : %d", goal);
}

//Codes
int main() {
	play_game();
	return 0;
}