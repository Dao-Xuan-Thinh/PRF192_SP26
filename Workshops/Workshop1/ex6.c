#include <stdio.h>

//total score / turn 10 point scale to letter grade / use if statement to determine conditions to pass (no subjects under 4.0 and total != 0)

int main(){
	float diligent, midterm, final;
	char letter_grade;
	float total;

	printf ("Diem chuyen can: ");
	scanf ("%f",&diligent);
	printf ("Diem giua ki: ");
	scanf ("%f",&midterm);
	printf ("Diem cuoi ky: ");
	scanf ("%f",&final);
		if (diligent < 4 || midterm < 4 || final < 4 || letter_grade == 'F'){
		printf("Vui long nop lai 5 trieu!");
		return 0;
		}

	total = (diligent*0.1)+(midterm*0.3)+(final*0.6);

	if (total>=8.5 && total<=10){
		letter_grade = 'A';}
	else if (total>=7){
		letter_grade = 'B';}
	else if (total>=5.5){
		letter_grade = 'C';}
	else if (total>=4){
		letter_grade = 'D';}
	else{
		letter_grade = 'F';}
	
	printf("Diem cua ban la: %c",letter_grade);
	printf("\nHay qua qua mon roi!");

	return 0;
}