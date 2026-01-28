#include <stdio.h>

//total score / turn 10 point scale to letter grade / use if statement to determine conditions to pass (no subjects under 4.0 and total != 0)

int main(){
	float diligent, midterm, final, total;
	char letter_grade;

	printf ("Diem chuyen can - Diem giua ki - Diem cuoi ky : ");
	if (scanf("%f %f %f", &diligent, &midterm, &final) != 3){
		printf("So khong hop le");
		return 0;
	}
	
	
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