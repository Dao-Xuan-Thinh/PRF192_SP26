#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

typedef struct{
    int x;
    int y;
}Point;

int main() {
  system("cls");
  printf("INPUT:\n");
  
  int n;
  scanf("%d", &n);
  Point p[n];

  for(int i = 0; i < n; i++){
        scanf("%d%d", &p[i].x, &p[i].y);
    }
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  
  for(int i = 0; i < n; i++){
        printf("%d %d\n", p[i].x, p[i].y);
    }
  
 
 
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
