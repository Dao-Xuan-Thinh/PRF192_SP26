#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int filterString(char str[]) {
    int i, j = 0;
    for (i = 0; str[i] != '\0'; i++) {
        // Chuyển ký tự hiện tại sang chữ thường để kiểm tra
        char c = tolower(str[i]);
        
        // Kiểm tra xem có phải nguyên âm không
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            j++;
        }
    }
    return j;
}

int main() {
  system("cls");
	printf("\nINPUT:\n");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
    char input[101];
	if (fgets(input, sizeof(input), stdin)) {
        input[strcspn(input, "\n")] = 0;
    }
  



  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: ADD YOUR CODE FOR OUTPUT HERE:
    int temp = 0;
    
    temp = filterString(input);
	printf("%d", temp);

  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
